#include "vTask_lvgl.hpp"

//-------------------------------------------------------------------------------------------------
// -- ESP32-8048S043
//-------------------------------------------------------------------------------------------------
// Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
//     GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
//     40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 42 /* PCLK */,
//     45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
//     5 /* G0 */, 6 /* G1 */, 7 /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
//     8 /* B0 */, 3 /* B1 */, 46 /* B2 */, 9 /* B3 */, 1 /* B4 */
// );

// Arduino_RPi_DPI_RGBPanel *gfx = new Arduino_RPi_DPI_RGBPanel(
//     bus,
//     800 /* width */, 0 /* hsync_polarity */, 8 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 8 /* hsync_back_porch */,
//     480 /* height */, 0 /* vsync_polarity */, 8 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 8 /* vsync_back_porch */,
//     1 /* pclk_active_neg */, 14000000 /* prefer_speed */, true /* auto_flush */);


//-------------------------------------------------------------------------------------------------
// -- ESP32-8048S070
//-------------------------------------------------------------------------------------------------
Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
    GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
    41 /* DE */, 40 /* VSYNC */, 39 /* HSYNC */, 42 /* PCLK */,
    14 /* R0 */, 21 /* R1 */, 47 /* R2 */, 48 /* R3 */, 45 /* R4 */,
    9 /* G0 */, 46 /* G1 */, 3 /* G2 */, 8 /* G3 */, 16 /* G4 */, 1 /* G5 */,
    15 /* B0 */, 7 /* B1 */, 6 /* B2 */, 5 /* B3 */, 4 /* B4 */
);
Arduino_RPi_DPI_RGBPanel *gfx = new Arduino_RPi_DPI_RGBPanel(
    bus, 800 /* width */, 0 /* hsync_polarity */, 210 /* hsync_front_porch */, 30 /* hsync_pulse_width */, 16 /* hsync_back_porch */,
    480 /* height */, 0 /* vsync_polarity */, 22 /* vsync_front_porch */, 13 /* vsync_pulse_width */, 10 /* vsync_back_porch */,
    1 /* pclk_active_neg */, 16000000 /* prefer_speed */, true /* auto_flush */);

#include "touch.h"

void vTask_lvgl::CreateResources(int priority) {
  vTask_lvgl& r_this = vTask_lvgl::GetInstance();
  bool error = pdFALSE;

  // UI initialization
  error = r_this.initDisplayDriver();
  ui_init();

  // Semaphore initialization
  r_this.lvglSemaphore = xSemaphoreCreateBinary();
  error = r_this.giveLvglSemaphore();

  // Task inizialization
  r_this.createTask(priority);
}

vTask_lvgl& vTask_lvgl::GetInstance(void){
    static vTask_lvgl instance;
    return instance;
}

vTask_lvgl::vTask_lvgl():
  watchdog_sensor_data(false) {
}

void vTask_lvgl::Run(void *p)
{
    vTask_lvgl& r_this = GetInstance();

    //r_this.init_relay();
    while (true)
    {
        if(r_this.takeLvglSemaphore() == pdTRUE) {
          lv_timer_handler();
          //r_this.read_from_receive_queue();
          //r_this.check_watchdog_sensor_data();
          r_this.giveLvglSemaphore();
        }
        vTaskDelay(100 / portTICK_PERIOD_MS);

        
        
        // UBaseType_t stackWatermark = uxTaskGetStackHighWaterMark(NULL);
        // char str_value[10];
        // sprintf(str_value, "%d", stackWatermark);
        // lv_label_set_text(ui_Label18, str_value); 
    }
}

void vTask_lvgl::createTask(int priority)
{
    xTaskCreate(this->Run, "lvglTask", 16000, NULL, priority, &lvglTask);
}

bool vTask_lvgl::takeLvglSemaphore()
{
    return xSemaphoreTake(lvglSemaphore, 0);
}

bool vTask_lvgl::giveLvglSemaphore()
{
    return xSemaphoreGive(lvglSemaphore);
}

bool vTask_lvgl::initDisplayDriver() {
  bool error = pdFALSE;
  //Init Display
  gfx->begin();
  //Enable Background Light
  #ifdef TFT_BL
    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);
  #endif

  gfx->fillScreen(BLACK);
  delay(500);
  lv_init();
  delay(10);
  touch_init();
  screenWidth = gfx->width();
  screenHeight = gfx->height();
  #ifdef ESP32
    disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * screenHeight / 4, MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT);
  #else
    disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * screenHeight / 4);
  #endif
    if (!disp_draw_buf)
    {
      error = pdTRUE;
      //Serial.println("LVGL disp_draw_buf allocate failed!");
    }
    else
    {
      lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * screenHeight / 4);

      /* Initialize the display */
      lv_disp_drv_init(&disp_drv);
      /* Change the following line to your display resolution */
      disp_drv.hor_res = screenWidth;
      disp_drv.ver_res = screenHeight;
      disp_drv.flush_cb = vTask_lvgl::cbDisplayFlush;
      disp_drv.draw_buf = &draw_buf;
      lv_disp_drv_register(&disp_drv);

      /* Initialize the (dummy) input device driver */
      static lv_indev_drv_t indev_drv;
      lv_indev_drv_init(&indev_drv);
      indev_drv.type = LV_INDEV_TYPE_POINTER;
      indev_drv.read_cb = vTask_lvgl::cbReadTouchCordinate;
      lv_indev_drv_register(&indev_drv);
    }
    return error;
}

void vTask_lvgl::cbDisplayFlush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);
  gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
  lv_disp_flush_ready(disp);
}

void vTask_lvgl::cbReadTouchCordinate(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  if (touch_has_signal())
  {
    if (touch_touched())
    {
      data->state = LV_INDEV_STATE_PR;

      /*Set the coordinates*/
      data->point.x = touch_last_x;
      data->point.y = touch_last_y;
    }
    else if (touch_released())
    {
      data->state = LV_INDEV_STATE_REL;
    }
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
}



