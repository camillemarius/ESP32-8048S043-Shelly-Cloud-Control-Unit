#pragma once
#include <lvgl.h>
#include "lv_conf.h"
#include "ui.h"
#include "queue/Message.h"
#include "queue/MessageQueueHolder.hpp"
#include "ui_refresh.h"

/*******************************************************************************
 ******************************************************************************/
#include <Arduino_GFX_Library.h>
#define TFT_BL 2
#define GFX_BL DF_GFX_BL // default backlight pin, you may replace DF_GFX_BL to actual backlight pin

class vTask_lvgl {
    public:
        vTask_lvgl();
        static vTask_lvgl& GetInstance(void);
        static void CreateResources(int priority);
        static void Run(void *p);
        static void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
        static void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data);
        void takeLvglSemaphore();
        void giveLvglSemaphore();

        void read_from_receive_queue();
        void createLvglTask(int priority);
        void lvgl_task_init(int priority);
        void update_sensor_data(Message msg, lv_obj_t* label_obj);
        void initDisplayDriv();
        void init_relay();
        void update_gui(Message msg, lv_obj_t* switch_obj, lv_obj_t* slider_obj);
        void check_watchdog_sensor_data();

    private:
        /* Change to your screen resolution */
        uint32_t screenWidth;
        uint32_t screenHeight;
        lv_disp_draw_buf_t draw_buf;
        lv_color_t *disp_draw_buf;
        lv_disp_drv_t disp_drv;

        SemaphoreHandle_t lvglSemaphore;
        TaskHandle_t lvglTask;

        bool watchdog_sensor_data;

};
