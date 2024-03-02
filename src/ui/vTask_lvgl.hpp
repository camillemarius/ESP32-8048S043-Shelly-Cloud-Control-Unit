#pragma once
#include <lvgl.h>
#include "lv_conf.h"
#include "ui.h"
#include "queue/Message.h"
#include "queue/MessageQueueHolder.hpp"
//#include "ui_refresh.h"

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
        static void cbDisplayFlush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
        static void cbReadTouchCordinate(lv_indev_drv_t *indev_driver, lv_indev_data_t *data);
        
    private:
        void createTask(int priority);
        bool takeLvglSemaphore();
        bool giveLvglSemaphore();
        bool initDisplayDriver();

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
