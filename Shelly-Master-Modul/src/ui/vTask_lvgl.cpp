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

vTask_lvgl::vTask_lvgl():
    watchdog_sensor_data(false),
    screenWidth(0),
    screenHeight(0){

}

vTask_lvgl& vTask_lvgl::GetInstance(void){
    static vTask_lvgl instance;
    return instance;
}

 void vTask_lvgl::CreateResources(int priority) {
    vTask_lvgl& r_this = vTask_lvgl::GetInstance();
    r_this.lvgl_task_init(priority);
 }

void vTask_lvgl::my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);
  gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
  lv_disp_flush_ready(disp);
}

void vTask_lvgl::my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
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


void vTask_lvgl::takeLvglSemaphore()
{
    xSemaphoreTake(lvglSemaphore, 0);
}

void vTask_lvgl::giveLvglSemaphore()
{
    xSemaphoreGive(lvglSemaphore);
}

void vTask_lvgl::update_gui(Message msg, lv_obj_t* switch_obj, lv_obj_t* slider_obj) {
  if(msg.power_local== true) {
      lv_obj_add_state(switch_obj,LV_STATE_CHECKED);
    }
    else {
      lv_obj_clear_state(switch_obj,LV_STATE_CHECKED);
    }
    if(slider_obj != NULL) {
      lv_slider_set_value(slider_obj,msg.slider_local,LV_ANIM_ON);
    } else {

    }
}

void vTask_lvgl::update_sensor_data(Message msg, lv_obj_t* label_obj) {
    char str_value[10];
    sprintf(str_value, "%d", msg.slider_local);
    lv_label_set_text(label_obj, str_value);
} 

void vTask_lvgl::read_from_receive_queue() {
  Message msg;
  /*if(MessageQueueHolder::receive_gui(msg, 0)) {
    switch(msg.device_local) {
      case _Power_Zentrale_:
        Message msgOff;// = {0,0,false};
        msgOff.device_local = 0;
        msgOff.power_local = false;
        msgOff.slider_local = 0;
        
        update_gui(msgOff,ui_Switch_Power_Ender,NULL);
        update_gui(msgOff,ui_Switch_Power_Light_Ender,ui_Slider_Brightness_Light_Ender);
        update_gui(msgOff,ui_Switch_Power_Alveo3D,ui_Slider_Speed_Alveo3D);
        update_gui(msgOff,ui_Switch_Power_Xiaomi,NULL);
        update_gui(msgOff,ui_Switch_Power_Chatcnc,NULL);
        update_gui(msgOff,ui_Switch_Power_Light_Chatcnc,ui_Slider_Brightness_Light_Chatcnc);

      break;
      case _Power_Ender3Pro_:
        update_gui(msg,ui_Switch_Power_Ender,NULL);
      break;
      case _Power_Licht_Ender3Pro_:
        update_gui(msg,ui_Switch_Power_Light_Ender,ui_Slider_Brightness_Light_Ender);
      break;
      case _Power_Alveo3D_:
        update_gui(msg,ui_Switch_Power_Alveo3D,ui_Slider_Speed_Alveo3D);
      break;
      case _Power_Xiaomi_Ender3Pro_:
        update_gui(msg,ui_Switch_Power_Xiaomi,NULL);
      break;
      case _Power_ChatCnc_:
        update_gui(msg,ui_Switch_Power_Chatcnc,NULL);
      break;
      case _Power_Licht_ChatCnc_:
        update_gui(msg,ui_Switch_Power_Light_Chatcnc,ui_Slider_Brightness_Light_Chatcnc);
      break;

      

      case _Airquality_Ender3Pro_1:
        update_sensor_data(msg,ui_label_airquality_ender_1);
      break;
      case _Airquality_Ender3Pro_25:
        update_sensor_data(msg,ui_label_airquality_ender_25);
      break;
      case _Airquality_Ender3Pro_10:
        update_sensor_data(msg,ui_label_airquality_ender_10);
      break;
      case _Temperature_Ender3Pro_:
        update_sensor_data(msg,ui_label_temp_ender);
      break;
      case _Humidity_Ender3Pro_:
        update_sensor_data(msg,ui_label_humidity_ender);
      break;
      case _Pressure_Ender3Pro_:
        update_sensor_data(msg,ui_label_luftdruck_ender);
      break;
    } 
    watchdog_sensor_data = true;
  }*/
}

void vTask_lvgl::init_relay() {

  // _Power_Zentrale_,
  // _Power_Ender3Pro_,
  // _Power_Licht_Ender3Pro_,
  // _Helligkeit_Licht_Ender3Pro_,
  // _Power_Alveo3D_,
  // _Speed_Alveo3D_,
  // _Power_Xiaomi_Ender3Pro,
  // _Power_ChatCnc_,
  // _Power_Licht_ChatCnc_,
  // _Helligkeit_Licht_ChatCnc_,


  Message msg;
  msg.device_local = _Power_Zentrale_;
  msg.power_local = false;
  msg.slider_local = 0;
  MessageQueueHolder::send_cmd(msg,1);
  
  msg.device_local = _Power_Ender3Pro_;
  msg.power_local = false;
  msg.slider_local = 0;
  MessageQueueHolder::send_cmd(msg,1);

  msg.device_local = _Power_Licht_Ender3Pro_;
  msg.power_local = false;
  msg.slider_local = 0;
  MessageQueueHolder::send_cmd(msg,1);
  
  msg.device_local = _Power_Alveo3D_;
  msg.power_local = false;
  msg.slider_local = 0;
  MessageQueueHolder::send_cmd(msg,1);
  
  msg.device_local = _Power_Xiaomi_Ender3Pro_;
  msg.power_local = false;
  msg.slider_local = 0;
  MessageQueueHolder::send_cmd(msg,1);
  
  msg.device_local = _Power_ChatCnc_;
  msg.power_local = false;
  msg.slider_local = 0;
  MessageQueueHolder::send_cmd(msg,1);
  
  msg.device_local = _Power_Licht_ChatCnc_;
  msg.power_local = false;
  msg.slider_local = 0;
  MessageQueueHolder::send_cmd(msg,1);
}

void vTask_lvgl::check_watchdog_sensor_data() {
  static u_int16_t ms10_cnt = 0;
  static bool gui_status_is_updated = false;
  if(watchdog_sensor_data == true) {
      watchdog_sensor_data = false;
      ms10_cnt = 0;
      if(gui_status_is_updated == false) {
        gui_status_is_updated = true;
        
        lv_img_set_src(ui_image_sensor_status0,&ui_img_1891078254);
        lv_obj_set_x(ui_image_sensor_status0, 65);
        lv_img_set_src(ui_image_sensor_status1,&ui_img_1891078254);
        lv_obj_set_x(ui_image_sensor_status1, 65);
        lv_img_set_src(ui_image_sensor_status2,&ui_img_1891078254);
        lv_obj_set_x(ui_image_sensor_status2, 65);
        lv_img_set_src(ui_image_sensor_status3,&ui_img_1891078254);
        lv_obj_set_x(ui_image_sensor_status3, 65);
        lv_img_set_src(ui_image_sensor_status4,&ui_img_1891078254);
        lv_obj_set_x(ui_image_sensor_status4, 65);
        lv_img_set_src(ui_image_sensor_status5,&ui_img_1891078254);
        lv_obj_set_x(ui_image_sensor_status5, 65);
        lv_label_set_text(ui_label_airquality_sensor_status,  "Verbunden");
        lv_label_set_text(ui_label_airquality_sensor_status1, "Verbunden");
        lv_label_set_text(ui_label_airquality_sensor_status2, "Verbunden");
        lv_label_set_text(ui_label_temperatur_sensor_status,  "Verbunden");
        lv_label_set_text(ui_label_humidity_sensor_status,    "Verbunden");
        lv_label_set_text(ui_label_airpressure_sensor_status, "Verbunden");
      }
      

  }
 else if(watchdog_sensor_data == false) {
      if(ms10_cnt>=5000) {
        if(gui_status_is_updated == true) {
          gui_status_is_updated = false;
          ms10_cnt = 0;
          lv_img_set_src(ui_image_sensor_status0,&ui_img_581727398);
          lv_obj_set_x(ui_image_sensor_status0, 88);
          lv_img_set_src(ui_image_sensor_status1,&ui_img_581727398);
          lv_obj_set_x(ui_image_sensor_status1, 88);
          lv_img_set_src(ui_image_sensor_status2,&ui_img_581727398);
          lv_obj_set_x(ui_image_sensor_status2, 88);
          lv_img_set_src(ui_image_sensor_status3,&ui_img_581727398);
          lv_obj_set_x(ui_image_sensor_status3, 88);
          lv_img_set_src(ui_image_sensor_status4,&ui_img_581727398);
          lv_obj_set_x(ui_image_sensor_status4, 88);
          lv_img_set_src(ui_image_sensor_status5,&ui_img_581727398);
          lv_obj_set_x(ui_image_sensor_status5, 88);
          lv_label_set_text(ui_label_airquality_sensor_status,  "Nicht verbunden");
          lv_label_set_text(ui_label_airquality_sensor_status1, "Nicht verbunden");
          lv_label_set_text(ui_label_airquality_sensor_status2, "Nicht verbunden");
          lv_label_set_text(ui_label_temperatur_sensor_status,  "Nicht verbunden");
          lv_label_set_text(ui_label_humidity_sensor_status,    "Nicht verbunden");
          lv_label_set_text(ui_label_airpressure_sensor_status, "Nicht verbunden");
        }
      }
      else {
        ms10_cnt++;
      }
  }
}

void vTask_lvgl::Run(void *p)
{
    vTask_lvgl& r_this = GetInstance();

    //r_this.init_relay();
    while (true)
    {
        r_this.takeLvglSemaphore();
           lv_timer_handler();
           //r_this.read_from_receive_queue();
           //r_this.check_watchdog_sensor_data();
        r_this.giveLvglSemaphore();
        vTaskDelay(50 / portTICK_PERIOD_MS);
    }
}

void vTask_lvgl::createLvglTask(int priority)
{
    lvglSemaphore = xSemaphoreCreateBinary();
    xTaskCreate(this->Run, "lvglTask", 20000, NULL, priority, &lvglTask);
}

void vTask_lvgl::initDisplayDriv() {
  // Init Display
  gfx->begin();
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
      disp_drv.flush_cb = vTask_lvgl::my_disp_flush;
      disp_drv.draw_buf = &draw_buf;
      lv_disp_drv_register(&disp_drv);

      /* Initialize the (dummy) input device driver */
      static lv_indev_drv_t indev_drv;
      lv_indev_drv_init(&indev_drv);
      indev_drv.type = LV_INDEV_TYPE_POINTER;
      indev_drv.read_cb = vTask_lvgl::my_touchpad_read;
      lv_indev_drv_register(&indev_drv);
    }
}

void vTask_lvgl::lvgl_task_init(int priority) {
  initDisplayDriv();
  ui_init();
  createLvglTask(priority);
}

