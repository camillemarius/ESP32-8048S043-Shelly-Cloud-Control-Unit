// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void ui_event_Screen_DP(lv_event_t * e);
lv_obj_t * ui_Screen_DP;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Panel10;
lv_obj_t * ui_Label27;
void ui_event_Switch_Power_Ender1(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Ender1;
lv_obj_t * ui_Label34;
lv_obj_t * ui_Image9;
lv_obj_t * ui_Panel11;
lv_obj_t * ui_Label13;
void ui_event_Switch_Power_Ender(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Ender;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Panel13;
lv_obj_t * ui_Label17;
void ui_event_Switch_Power_Chatcnc(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Chatcnc;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Image5;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label1;
void ui_event_Slider_Brightness_Light_Ender(lv_event_t * e);
lv_obj_t * ui_Slider_Brightness_Light_Ender;
void ui_event_Switch_Power_Light_Ender(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Light_Ender;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Panel14;
lv_obj_t * ui_Label19;
void ui_event_Slider_Brightness_Light_Chatcnc(lv_event_t * e);
lv_obj_t * ui_Slider_Brightness_Light_Chatcnc;
void ui_event_Switch_Power_Light_Chatcnc(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Light_Chatcnc;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Image6;
lv_obj_t * ui_Panel15;
lv_obj_t * ui_Label22;
void ui_event_Slider_Speed_Alveo3D(lv_event_t * e);
lv_obj_t * ui_Slider_Speed_Alveo3D;
void ui_event_Switch_Power_Alveo3D(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Alveo3D;
lv_obj_t * ui_Image7;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Label24;
void ui_event_Image1(lv_event_t * e);
lv_obj_t * ui_Image1;
lv_obj_t * ui_Panel9;
lv_obj_t * ui_Label10;
void ui_event_Switch_Power_Xiaomi(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Xiaomi;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Image4;
void ui_event_Screen_CHAT_CNC(lv_event_t * e);
lv_obj_t * ui_Screen_CHAT_CNC;
lv_obj_t * ui_Panel12;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label8;
lv_obj_t * ui_arc_airquality_ender;
lv_obj_t * ui_Label36;
lv_obj_t * ui_label_airquality_ender_1;
lv_obj_t * ui_Image12;
lv_obj_t * ui_label_airquality_sensor_status;
// ADDED CCH
lv_obj_t * ui_image_sensor_status0;
lv_obj_t * ui_image_sensor_status1;
lv_obj_t * ui_image_sensor_status2;
lv_obj_t * ui_image_sensor_status3;
lv_obj_t * ui_image_sensor_status4;
lv_obj_t * ui_image_sensor_status5;
// ADDED CCH
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label30;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_Label31;
lv_obj_t * ui_arc_airquality_ender1;
lv_obj_t * ui_Label32;
lv_obj_t * ui_label_airquality_ender_25;
lv_obj_t * ui_Image16;
lv_obj_t * ui_label_airquality_sensor_status1;
lv_obj_t * ui_Label38;
lv_obj_t * ui_Label46;
lv_obj_t * ui_Panel7;
lv_obj_t * ui_Label47;
lv_obj_t * ui_arc_airquality_ender2;
lv_obj_t * ui_Label48;
lv_obj_t * ui_label_airquality_ender_10;
lv_obj_t * ui_Image17;
lv_obj_t * ui_label_airquality_sensor_status2;
lv_obj_t * ui_Label49;
lv_obj_t * ui_Label50;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label40;
lv_obj_t * ui_label_temp_ender;
lv_obj_t * ui_arc_temp_ender;
lv_obj_t * ui_Label2;
lv_obj_t * ui_label_temperatur_sensor_status;
lv_obj_t * ui_Image13;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Panel8;
lv_obj_t * ui_Label37;
lv_obj_t * ui_label_humidity_ender;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Arc_humidity_ender;
lv_obj_t * ui_label_humidity_sensor_status;
lv_obj_t * ui_Image10;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Panel18;
lv_obj_t * ui_Label33;
lv_obj_t * ui_label_luftdruck_ender;
lv_obj_t * ui_arc_temp_ender1;
lv_obj_t * ui_Label35;
lv_obj_t * ui_label_airpressure_sensor_status;
lv_obj_t * ui_Image14;
lv_obj_t * ui_Label39;
lv_obj_t * ui_Alveo_Info_Screen;
lv_obj_t * ui_Panel17;
lv_obj_t * ui_Label12;
// ADDED CCH
lv_obj_t * ui_image_sdcard_status;
// ADDED CCH
void ui_event_Image11(lv_event_t * e);
lv_obj_t * ui_Image11;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label29;
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label28;
lv_obj_t * ui_label_filter_saturation;
lv_obj_t * ui_label_operating_time;
lv_obj_t * ui_Arc2;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen_DP(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        _ui_screen_change(ui_Screen_CHAT_CNC, LV_SCR_LOAD_ANIM_MOVE_TOP, 750, 0);
    }
}
void ui_event_Switch_Power_Ender1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_ender(e);
    }
}
void ui_event_Switch_Power_Ender(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_ender(e);
    }
}
void ui_event_Switch_Power_Chatcnc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_chatcnc(e);
    }
}
void ui_event_Slider_Brightness_Light_Ender(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_slider_brightness_ender(e);
    }
}
void ui_event_Switch_Power_Light_Ender(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_light_ender(e);
    }
}
void ui_event_Slider_Brightness_Light_Chatcnc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_slider_brightness_chatcnc(e);
    }
}
void ui_event_Switch_Power_Light_Chatcnc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_light_chatcnc(e);
    }
}
void ui_event_Slider_Speed_Alveo3D(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_slider_speed_alveo3d(e);
    }
}
void ui_event_Switch_Power_Alveo3D(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_power_alveo3d(e);
    }
}
void ui_event_Image1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        //_ui_screen_change(ui_Alveo_Info_Screen, LV_SCR_LOAD_ANIM_OVER_TOP, 0, 0);
    }
}
void ui_event_Switch_Power_Xiaomi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_xiaomi(e);
    }
}
void ui_event_Screen_CHAT_CNC(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        _ui_screen_change(ui_Screen_DP, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 750, 0);
    }
}
void ui_event_Image11(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen_DP, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen_DP_screen_init(void)
{
    ui_Screen_DP = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen_DP, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel4 = lv_obj_create(ui_Screen_DP);
    lv_obj_set_width(ui_Panel4, 800);
    lv_obj_set_height(ui_Panel4, 500);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel4, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel4, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK);     /// Flags
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_Panel4, LV_DIR_HOR);

    ui_Panel10 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel10, 250);
    lv_obj_set_height(ui_Panel10, 440);
    lv_obj_set_x(ui_Panel10, -176);
    lv_obj_set_y(ui_Panel10, 40);
    lv_obj_set_align(ui_Panel10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel10, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel10, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel10, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_Panel10);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label27, -67);
    lv_obj_set_y(ui_Label27, 120);
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "Power");

    ui_Switch_Power_Ender1 = lv_switch_create(ui_Panel10);
    lv_obj_set_width(ui_Switch_Power_Ender1, 50);
    lv_obj_set_height(ui_Switch_Power_Ender1, 25);
    lv_obj_set_x(ui_Switch_Power_Ender1, 65);
    lv_obj_set_y(ui_Switch_Power_Ender1, 120);
    lv_obj_set_align(ui_Switch_Power_Ender1, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Ender1, LV_STATE_CHECKED);       /// States

    ui_Label34 = lv_label_create(ui_Panel10);
    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label34, 0);
    lv_obj_set_y(ui_Label34, -180);
    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label34, "Zentrale");

    ui_Image9 = lv_img_create(ui_Panel10);
    lv_img_set_src(ui_Image9, &ui_img_538830638);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image9, 0);
    lv_obj_set_y(ui_Image9, -22);
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image9, 250);

    ui_Panel11 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel11, 250);
    lv_obj_set_height(ui_Panel11, 440);
    lv_obj_set_x(ui_Panel11, -176);
    lv_obj_set_y(ui_Panel11, 40);
    lv_obj_set_align(ui_Panel11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel11, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel11, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel11, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, -67);
    lv_obj_set_y(ui_Label13, 120);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "Power");

    ui_Switch_Power_Ender = lv_switch_create(ui_Panel11);
    lv_obj_set_width(ui_Switch_Power_Ender, 50);
    lv_obj_set_height(ui_Switch_Power_Ender, 25);
    lv_obj_set_x(ui_Switch_Power_Ender, 65);
    lv_obj_set_y(ui_Switch_Power_Ender, 120);
    lv_obj_set_align(ui_Switch_Power_Ender, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Ender, LV_STATE_CHECKED);       /// States

    ui_Label16 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label16, 0);
    lv_obj_set_y(ui_Label16, -180);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "Ender 3 Pro");

    ui_Image3 = lv_img_create(ui_Panel11);
    lv_img_set_src(ui_Image3, &ui_img_538830638);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image3, 0);
    lv_obj_set_y(ui_Image3, -22);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image3, 250);

    ui_Panel13 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel13, 250);
    lv_obj_set_height(ui_Panel13, 440);
    lv_obj_set_x(ui_Panel13, -176);
    lv_obj_set_y(ui_Panel13, 40);
    lv_obj_set_align(ui_Panel13, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel13, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel13, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel13, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Panel13);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, -67);
    lv_obj_set_y(ui_Label17, 114);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "Power");

    ui_Switch_Power_Chatcnc = lv_switch_create(ui_Panel13);
    lv_obj_set_width(ui_Switch_Power_Chatcnc, 50);
    lv_obj_set_height(ui_Switch_Power_Chatcnc, 25);
    lv_obj_set_x(ui_Switch_Power_Chatcnc, 66);
    lv_obj_set_y(ui_Switch_Power_Chatcnc, 113);
    lv_obj_set_align(ui_Switch_Power_Chatcnc, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Chatcnc, LV_STATE_CHECKED);       /// States

    ui_Label18 = lv_label_create(ui_Panel13);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, 0);
    lv_obj_set_y(ui_Label18, -180);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "Chat Cnc");

    ui_Image5 = lv_img_create(ui_Panel13);
    lv_img_set_src(ui_Image5, &ui_img_1863824636);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image5, 0);
    lv_obj_set_y(ui_Image5, -22);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image5, 200);

    ui_Panel3 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel3, 250);
    lv_obj_set_height(ui_Panel3, 440);
    lv_obj_set_x(ui_Panel3, -176);
    lv_obj_set_y(ui_Panel3, 40);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -68);
    lv_obj_set_y(ui_Label1, 120);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Power");

    ui_Slider_Brightness_Light_Ender = lv_slider_create(ui_Panel3);
    lv_slider_set_value(ui_Slider_Brightness_Light_Ender, 100, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Brightness_Light_Ender) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Slider_Brightness_Light_Ender, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Brightness_Light_Ender, 200);
    lv_obj_set_height(ui_Slider_Brightness_Light_Ender, 10);
    lv_obj_set_x(ui_Slider_Brightness_Light_Ender, 0);
    lv_obj_set_y(ui_Slider_Brightness_Light_Ender, 185);
    lv_obj_set_align(ui_Slider_Brightness_Light_Ender, LV_ALIGN_CENTER);

    ui_Switch_Power_Light_Ender = lv_switch_create(ui_Panel3);
    lv_obj_set_width(ui_Switch_Power_Light_Ender, 50);
    lv_obj_set_height(ui_Switch_Power_Light_Ender, 25);
    lv_obj_set_x(ui_Switch_Power_Light_Ender, 73);
    lv_obj_set_y(ui_Switch_Power_Light_Ender, 120);
    lv_obj_set_align(ui_Switch_Power_Light_Ender, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Light_Ender, LV_STATE_CHECKED);       /// States

    ui_Label5 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, -180);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "Licht Ender 3 Pro");

    ui_Label15 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, -62);
    lv_obj_set_y(ui_Label15, 150);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "Helligkeit");
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_Panel3);
    lv_img_set_src(ui_Image2, &ui_img_1822783234);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image2, 0);
    lv_obj_set_y(ui_Image2, 5);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image2, 250);

    ui_Panel14 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel14, 250);
    lv_obj_set_height(ui_Panel14, 440);
    lv_obj_set_x(ui_Panel14, -176);
    lv_obj_set_y(ui_Panel14, 40);
    lv_obj_set_align(ui_Panel14, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel14, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel14, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel14, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Panel14);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, -67);
    lv_obj_set_y(ui_Label19, 113);
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "Power");

    ui_Slider_Brightness_Light_Chatcnc = lv_slider_create(ui_Panel14);
    lv_slider_set_value(ui_Slider_Brightness_Light_Chatcnc, 100, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Brightness_Light_Chatcnc) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Slider_Brightness_Light_Chatcnc, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Brightness_Light_Chatcnc, 200);
    lv_obj_set_height(ui_Slider_Brightness_Light_Chatcnc, 10);
    lv_obj_set_x(ui_Slider_Brightness_Light_Chatcnc, 0);
    lv_obj_set_y(ui_Slider_Brightness_Light_Chatcnc, 190);
    lv_obj_set_align(ui_Slider_Brightness_Light_Chatcnc, LV_ALIGN_CENTER);

    ui_Switch_Power_Light_Chatcnc = lv_switch_create(ui_Panel14);
    lv_obj_set_width(ui_Switch_Power_Light_Chatcnc, 50);
    lv_obj_set_height(ui_Switch_Power_Light_Chatcnc, 25);
    lv_obj_set_x(ui_Switch_Power_Light_Chatcnc, 66);
    lv_obj_set_y(ui_Switch_Power_Light_Chatcnc, 114);
    lv_obj_set_align(ui_Switch_Power_Light_Chatcnc, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Light_Chatcnc, LV_STATE_CHECKED);       /// States

    ui_Label20 = lv_label_create(ui_Panel14);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label20, 0);
    lv_obj_set_y(ui_Label20, -180);
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "Licht Chat CNC");

    ui_Label21 = lv_label_create(ui_Panel14);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label21, -62);
    lv_obj_set_y(ui_Label21, 160);
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "Helligkeit");
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image6 = lv_img_create(ui_Panel14);
    lv_img_set_src(ui_Image6, &ui_img_1822783234);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image6, 0);
    lv_obj_set_y(ui_Image6, -3);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image6, 250);

    ui_Panel15 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel15, 250);
    lv_obj_set_height(ui_Panel15, 440);
    lv_obj_set_x(ui_Panel15, -176);
    lv_obj_set_y(ui_Panel15, 40);
    lv_obj_set_align(ui_Panel15, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel15, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel15, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel15, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel15, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label22, -67);
    lv_obj_set_y(ui_Label22, 120);
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "Power");

    ui_Slider_Speed_Alveo3D = lv_slider_create(ui_Panel15);
    lv_slider_set_value(ui_Slider_Speed_Alveo3D, 100, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Speed_Alveo3D) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Slider_Speed_Alveo3D, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Speed_Alveo3D, 200);
    lv_obj_set_height(ui_Slider_Speed_Alveo3D, 10);
    lv_obj_set_x(ui_Slider_Speed_Alveo3D, 0);
    lv_obj_set_y(ui_Slider_Speed_Alveo3D, 185);
    lv_obj_set_align(ui_Slider_Speed_Alveo3D, LV_ALIGN_CENTER);

    ui_Switch_Power_Alveo3D = lv_switch_create(ui_Panel15);
    lv_obj_set_width(ui_Switch_Power_Alveo3D, 50);
    lv_obj_set_height(ui_Switch_Power_Alveo3D, 25);
    lv_obj_set_x(ui_Switch_Power_Alveo3D, 82);
    lv_obj_set_y(ui_Switch_Power_Alveo3D, 120);
    lv_obj_set_align(ui_Switch_Power_Alveo3D, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Alveo3D, LV_STATE_CHECKED);       /// States

    ui_Image7 = lv_img_create(ui_Panel15);
    lv_img_set_src(ui_Image7, &ui_img_1863824636);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image7, 250);

    ui_Label23 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label23, 0);
    lv_obj_set_y(ui_Label23, -180);
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "Alveo 3D");

    ui_Label24 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label24, -34);
    lv_obj_set_y(ui_Label24, 152);
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, "Ventilator Speed");
    lv_obj_set_style_text_font(ui_Label24, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Panel15);
    lv_img_set_src(ui_Image1, &ui_img_1863824636);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image1, 86);
    lv_obj_set_y(ui_Image1, -180);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 200);

    ui_Panel9 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel9, 250);
    lv_obj_set_height(ui_Panel9, 440);
    lv_obj_set_x(ui_Panel9, -176);
    lv_obj_set_y(ui_Panel9, 40);
    lv_obj_set_align(ui_Panel9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel9, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel9, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel9, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Panel9);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, -68);
    lv_obj_set_y(ui_Label10, 113);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "Power");

    ui_Switch_Power_Xiaomi = lv_switch_create(ui_Panel9);
    lv_obj_set_width(ui_Switch_Power_Xiaomi, 50);
    lv_obj_set_height(ui_Switch_Power_Xiaomi, 25);
    lv_obj_set_x(ui_Switch_Power_Xiaomi, 64);
    lv_obj_set_y(ui_Switch_Power_Xiaomi, 115);
    lv_obj_set_align(ui_Switch_Power_Xiaomi, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Xiaomi, LV_STATE_CHECKED);       /// States

    ui_Label11 = lv_label_create(ui_Panel9);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, -180);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "Luftfilter Ender 3 Pro");

    ui_Image4 = lv_img_create(ui_Panel9);
    lv_img_set_src(ui_Image4, &ui_img_1869445265);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image4, -1);
    lv_obj_set_y(ui_Image4, -30);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image4, 200);

    lv_obj_add_event_cb(ui_Switch_Power_Ender1, ui_event_Switch_Power_Ender1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Ender, ui_event_Switch_Power_Ender, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Chatcnc, ui_event_Switch_Power_Chatcnc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider_Brightness_Light_Ender, ui_event_Slider_Brightness_Light_Ender, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Light_Ender, ui_event_Switch_Power_Light_Ender, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider_Brightness_Light_Chatcnc, ui_event_Slider_Brightness_Light_Chatcnc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Light_Chatcnc, ui_event_Switch_Power_Light_Chatcnc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider_Speed_Alveo3D, ui_event_Slider_Speed_Alveo3D, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Alveo3D, ui_event_Switch_Power_Alveo3D, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Image1, ui_event_Image1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Xiaomi, ui_event_Switch_Power_Xiaomi, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen_DP, ui_event_Screen_DP, LV_EVENT_ALL, NULL);

}
void ui_Screen_CHAT_CNC_screen_init(void)
{
    ui_Screen_CHAT_CNC = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen_CHAT_CNC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel12 = lv_obj_create(ui_Screen_CHAT_CNC);
    lv_obj_set_width(ui_Panel12, 800);
    lv_obj_set_height(ui_Panel12, 500);
    lv_obj_set_align(ui_Panel12, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel12, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel12, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel12, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK);     /// Flags
    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel12, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_Panel12, LV_DIR_HOR);

    ui_Panel2 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel2, 250);
    lv_obj_set_height(ui_Panel2, 440);
    lv_obj_set_x(ui_Panel2, -138);
    lv_obj_set_y(ui_Panel2, -4);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, 0);
    lv_obj_set_y(ui_Label8, -180);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "Luftqualitat");

    ui_arc_airquality_ender = lv_arc_create(ui_Panel2);
    lv_obj_set_width(ui_arc_airquality_ender, 200);
    lv_obj_set_height(ui_arc_airquality_ender, 200);
    lv_obj_set_x(ui_arc_airquality_ender, 0);
    lv_obj_set_y(ui_arc_airquality_ender, 20);
    lv_obj_set_align(ui_arc_airquality_ender, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_airquality_ender,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_arc_airquality_ender, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_arc_airquality_ender, 100);
    lv_obj_set_style_arc_width(ui_arc_airquality_ender, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_airquality_ender, lv_color_hex(0xFF7004), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_airquality_ender, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_airquality_ender, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_arc_airquality_ender, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_arc_airquality_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_airquality_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_airquality_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_airquality_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_airquality_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label36 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label36, 0);
    lv_obj_set_y(ui_Label36, 45);
    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label36, "ppm");

    ui_label_airquality_ender_1 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_label_airquality_ender_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_airquality_ender_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_label_airquality_ender_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_airquality_ender_1, "n.a.");
    lv_obj_set_style_text_font(ui_label_airquality_ender_1, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image12 = lv_img_create(ui_Panel2);
    lv_img_set_src(ui_Image12, &ui_img_1863824636);
    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image12, 80);
    lv_obj_set_y(ui_Image12, -180);
    lv_obj_set_align(ui_Image12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image12, 200);

    ui_label_airquality_sensor_status = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_label_airquality_sensor_status, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_airquality_sensor_status, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_airquality_sensor_status, 0);
    lv_obj_set_y(ui_label_airquality_sensor_status, 157);
    lv_obj_set_align(ui_label_airquality_sensor_status, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_airquality_sensor_status, "Nicht verbunden");

    // ADDED CCH
    ui_image_sensor_status0 = lv_img_create(ui_Panel2);
    lv_img_set_src(ui_image_sensor_status0, &ui_img_581727398);
    lv_obj_set_width(ui_image_sensor_status0, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_image_sensor_status0, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_image_sensor_status0, 88);
    lv_obj_set_y(ui_image_sensor_status0, 159);
    lv_obj_set_align(ui_image_sensor_status0, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_image_sensor_status0, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_image_sensor_status0, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_image_sensor_status0, 200);
    // ADDED CCH

    ui_Label3 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 180);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Ender 3 Pro");

    ui_Label30 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label30, 0);
    lv_obj_set_y(ui_Label30, -150);
    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label30, "PM1.0");
    lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel6 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel6, 250);
    lv_obj_set_height(ui_Panel6, 440);
    lv_obj_set_x(ui_Panel6, -138);
    lv_obj_set_y(ui_Panel6, -4);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel6, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label31 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label31, 0);
    lv_obj_set_y(ui_Label31, -180);
    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label31, "Luftqualitat");

    ui_arc_airquality_ender1 = lv_arc_create(ui_Panel6);
    lv_obj_set_width(ui_arc_airquality_ender1, 200);
    lv_obj_set_height(ui_arc_airquality_ender1, 200);
    lv_obj_set_x(ui_arc_airquality_ender1, 0);
    lv_obj_set_y(ui_arc_airquality_ender1, 20);
    lv_obj_set_align(ui_arc_airquality_ender1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_airquality_ender1,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_arc_airquality_ender1, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_arc_airquality_ender1, 100);
    lv_obj_set_style_arc_width(ui_arc_airquality_ender1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_airquality_ender1, lv_color_hex(0x04FFFC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_airquality_ender1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_airquality_ender1, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_arc_airquality_ender1, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_arc_airquality_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_airquality_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_airquality_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_airquality_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_airquality_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label32 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label32, 0);
    lv_obj_set_y(ui_Label32, 45);
    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label32, "ppm");

    ui_label_airquality_ender_25 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_label_airquality_ender_25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_airquality_ender_25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_label_airquality_ender_25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_airquality_ender_25, "n.a.");
    lv_obj_set_style_text_font(ui_label_airquality_ender_25, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image16 = lv_img_create(ui_Panel6);
    lv_img_set_src(ui_Image16, &ui_img_1863824636);
    lv_obj_set_width(ui_Image16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image16, 80);
    lv_obj_set_y(ui_Image16, -180);
    lv_obj_set_align(ui_Image16, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image16, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image16, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image16, 200);

    ui_label_airquality_sensor_status1 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_label_airquality_sensor_status1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_airquality_sensor_status1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_airquality_sensor_status1, 0);
    lv_obj_set_y(ui_label_airquality_sensor_status1, 157);
    lv_obj_set_align(ui_label_airquality_sensor_status1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_airquality_sensor_status1, "Nicht verbunden");

    // ADDED CCH
    ui_image_sensor_status1 = lv_img_create(ui_Panel6);
    lv_img_set_src(ui_image_sensor_status1, &ui_img_581727398);
    lv_obj_set_width(ui_image_sensor_status1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_image_sensor_status1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_image_sensor_status1, 88);
    lv_obj_set_y(ui_image_sensor_status1, 159);
    lv_obj_set_align(ui_image_sensor_status1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_image_sensor_status1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_image_sensor_status1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_image_sensor_status1, 200);
    // ADDED CCH

    ui_Label38 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_Label38, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label38, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label38, 0);
    lv_obj_set_y(ui_Label38, 180);
    lv_obj_set_align(ui_Label38, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label38, "Ender 3 Pro");

    ui_Label46 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_Label46, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label46, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label46, 0);
    lv_obj_set_y(ui_Label46, -150);
    lv_obj_set_align(ui_Label46, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label46, "PM2.5");

    ui_Panel7 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel7, 250);
    lv_obj_set_height(ui_Panel7, 440);
    lv_obj_set_x(ui_Panel7, -138);
    lv_obj_set_y(ui_Panel7, -4);
    lv_obj_set_align(ui_Panel7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel7, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel7, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel7, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label47 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_Label47, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label47, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label47, 0);
    lv_obj_set_y(ui_Label47, -180);
    lv_obj_set_align(ui_Label47, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label47, "Luftqualitat");

    ui_arc_airquality_ender2 = lv_arc_create(ui_Panel7);
    lv_obj_set_width(ui_arc_airquality_ender2, 200);
    lv_obj_set_height(ui_arc_airquality_ender2, 200);
    lv_obj_set_x(ui_arc_airquality_ender2, 0);
    lv_obj_set_y(ui_arc_airquality_ender2, 20);
    lv_obj_set_align(ui_arc_airquality_ender2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_airquality_ender2,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_arc_airquality_ender2, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_arc_airquality_ender2, 100);
    lv_obj_set_style_arc_width(ui_arc_airquality_ender2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_airquality_ender2, lv_color_hex(0xFFCF04), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_airquality_ender2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_airquality_ender2, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_arc_airquality_ender2, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_arc_airquality_ender2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_airquality_ender2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_airquality_ender2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_airquality_ender2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_airquality_ender2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label48 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_Label48, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label48, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label48, 0);
    lv_obj_set_y(ui_Label48, 45);
    lv_obj_set_align(ui_Label48, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label48, "ppm");

    ui_label_airquality_ender_10 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_label_airquality_ender_10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_airquality_ender_10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_label_airquality_ender_10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_airquality_ender_10, "n.a.");
    lv_obj_set_style_text_font(ui_label_airquality_ender_10, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image17 = lv_img_create(ui_Panel7);
    lv_img_set_src(ui_Image17, &ui_img_1863824636);
    lv_obj_set_width(ui_Image17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image17, 80);
    lv_obj_set_y(ui_Image17, -180);
    lv_obj_set_align(ui_Image17, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image17, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image17, 200);

    ui_label_airquality_sensor_status2 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_label_airquality_sensor_status2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_airquality_sensor_status2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_airquality_sensor_status2, 0);
    lv_obj_set_y(ui_label_airquality_sensor_status2, 157);
    lv_obj_set_align(ui_label_airquality_sensor_status2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_airquality_sensor_status2, "Nicht verbunden");

    // ADDED CCH
    ui_image_sensor_status2 = lv_img_create(ui_Panel7);
    lv_img_set_src(ui_image_sensor_status2, &ui_img_581727398);
    lv_obj_set_width(ui_image_sensor_status2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_image_sensor_status2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_image_sensor_status2, 88);
    lv_obj_set_y(ui_image_sensor_status2, 159);
    lv_obj_set_align(ui_image_sensor_status2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_image_sensor_status2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_image_sensor_status2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_image_sensor_status2, 200);
    // ADDED CCH

    ui_Label49 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_Label49, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label49, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label49, 0);
    lv_obj_set_y(ui_Label49, 180);
    lv_obj_set_align(ui_Label49, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label49, "Ender 3 Pro");

    ui_Label50 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_Label50, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label50, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label50, 0);
    lv_obj_set_y(ui_Label50, -150);
    lv_obj_set_align(ui_Label50, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label50, "PM10");

    ui_Panel1 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel1, 250);
    lv_obj_set_height(ui_Panel1, 440);
    lv_obj_set_x(ui_Panel1, 368);
    lv_obj_set_y(ui_Panel1, 11);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label40 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label40, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label40, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label40, 0);
    lv_obj_set_y(ui_Label40, 45);
    lv_obj_set_align(ui_Label40, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label40, "°C");

    ui_label_temp_ender = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_label_temp_ender, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temp_ender, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_label_temp_ender, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_temp_ender, "n.a.");
    lv_obj_set_style_text_font(ui_label_temp_ender, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_ender = lv_arc_create(ui_Panel1);
    lv_obj_set_width(ui_arc_temp_ender, 200);
    lv_obj_set_height(ui_arc_temp_ender, 200);
    lv_obj_set_x(ui_arc_temp_ender, 0);
    lv_obj_set_y(ui_arc_temp_ender, 20);
    lv_obj_set_align(ui_arc_temp_ender, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_temp_ender,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_arc_temp_ender, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_arc_temp_ender, 100);
    lv_obj_set_style_arc_width(ui_arc_temp_ender, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_temp_ender, lv_color_hex(0xFF0520), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_ender, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_ender, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_arc_temp_ender, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_arc_temp_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, -180);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Temperatur");

    ui_label_temperatur_sensor_status = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_label_temperatur_sensor_status, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temperatur_sensor_status, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_temperatur_sensor_status, 0);
    lv_obj_set_y(ui_label_temperatur_sensor_status, 157);
    lv_obj_set_align(ui_label_temperatur_sensor_status, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_temperatur_sensor_status, "Nicht verbunden");

    // ADDED CCH
    ui_image_sensor_status3 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_image_sensor_status3, &ui_img_581727398);
    lv_obj_set_width(ui_image_sensor_status3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_image_sensor_status3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_image_sensor_status3, 88);
    lv_obj_set_y(ui_image_sensor_status3, 159);
    lv_obj_set_align(ui_image_sensor_status3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_image_sensor_status3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_image_sensor_status3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_image_sensor_status3, 200);
    // ADDED CCH

    ui_Image13 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_Image13, &ui_img_1863824636);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image13, 80);
    lv_obj_set_y(ui_Image13, -180);
    lv_obj_set_align(ui_Image13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image13, 200);

    ui_Label6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, 180);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Ender 3 Pro");

    ui_Panel8 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel8, 250);
    lv_obj_set_height(ui_Panel8, 440);
    lv_obj_set_x(ui_Panel8, 470);
    lv_obj_set_y(ui_Panel8, 16);
    lv_obj_set_align(ui_Panel8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel8, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel8, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel8, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label37 = lv_label_create(ui_Panel8);
    lv_obj_set_width(ui_Label37, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label37, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label37, 0);
    lv_obj_set_y(ui_Label37, 45);
    lv_obj_set_align(ui_Label37, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label37, "%");

    ui_label_humidity_ender = lv_label_create(ui_Panel8);
    lv_obj_set_width(ui_label_humidity_ender, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_humidity_ender, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_label_humidity_ender, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_humidity_ender, "n.a.");
    lv_obj_set_style_text_font(ui_label_humidity_ender, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Panel8);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, 0);
    lv_obj_set_y(ui_Label9, -180);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "Feuchtigkeit");

    ui_Arc_humidity_ender = lv_arc_create(ui_Panel8);
    lv_obj_set_width(ui_Arc_humidity_ender, 200);
    lv_obj_set_height(ui_Arc_humidity_ender, 200);
    lv_obj_set_x(ui_Arc_humidity_ender, 0);
    lv_obj_set_y(ui_Arc_humidity_ender, 20);
    lv_obj_set_align(ui_Arc_humidity_ender, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc_humidity_ender,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Arc_humidity_ender, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_Arc_humidity_ender, 100);
    lv_obj_set_style_arc_width(ui_Arc_humidity_ender, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc_humidity_ender, lv_color_hex(0x1302F4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc_humidity_ender, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_humidity_ender, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_Arc_humidity_ender, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Arc_humidity_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc_humidity_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc_humidity_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc_humidity_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc_humidity_ender, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_label_humidity_sensor_status = lv_label_create(ui_Panel8);
    lv_obj_set_width(ui_label_humidity_sensor_status, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_humidity_sensor_status, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_humidity_sensor_status, 0);
    lv_obj_set_y(ui_label_humidity_sensor_status, 157);
    lv_obj_set_align(ui_label_humidity_sensor_status, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_humidity_sensor_status, "Nicht verbunden");

    
    // ADDED CCH
    ui_image_sensor_status4 = lv_img_create(ui_Panel8);
    lv_img_set_src(ui_image_sensor_status4, &ui_img_581727398);
    lv_obj_set_width(ui_image_sensor_status4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_image_sensor_status4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_image_sensor_status4, 88);
    lv_obj_set_y(ui_image_sensor_status4, 159);
    lv_obj_set_align(ui_image_sensor_status4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_image_sensor_status4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_image_sensor_status4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_image_sensor_status4, 200);
    // ADDED CCH


    ui_Image10 = lv_img_create(ui_Panel8);
    lv_img_set_src(ui_Image10, &ui_img_1863824636);
    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image10, 80);
    lv_obj_set_y(ui_Image10, -180);
    lv_obj_set_align(ui_Image10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image10, 200);

    ui_Label4 = lv_label_create(ui_Panel8);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 180);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Ender 3 Pro");

    ui_Panel18 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel18, 250);
    lv_obj_set_height(ui_Panel18, 440);
    lv_obj_set_x(ui_Panel18, 368);
    lv_obj_set_y(ui_Panel18, 11);
    lv_obj_set_align(ui_Panel18, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel18, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel18, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel18, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel18, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel18, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label33 = lv_label_create(ui_Panel18);
    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label33, 0);
    lv_obj_set_y(ui_Label33, 45);
    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label33, "hPa");

    ui_label_luftdruck_ender = lv_label_create(ui_Panel18);
    lv_obj_set_width(ui_label_luftdruck_ender, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_luftdruck_ender, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_label_luftdruck_ender, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_luftdruck_ender, "n.a.");
    lv_obj_set_style_text_font(ui_label_luftdruck_ender, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_ender1 = lv_arc_create(ui_Panel18);
    lv_obj_set_width(ui_arc_temp_ender1, 200);
    lv_obj_set_height(ui_arc_temp_ender1, 200);
    lv_obj_set_x(ui_arc_temp_ender1, 0);
    lv_obj_set_y(ui_arc_temp_ender1, 20);
    lv_obj_set_align(ui_arc_temp_ender1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_temp_ender1,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_arc_temp_ender1, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_arc_temp_ender1, 100);
    lv_obj_set_style_arc_width(ui_arc_temp_ender1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_temp_ender1, lv_color_hex(0xF9FF00), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_ender1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_ender1, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_arc_temp_ender1, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_arc_temp_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_ender1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label35 = lv_label_create(ui_Panel18);
    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label35, 0);
    lv_obj_set_y(ui_Label35, -180);
    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label35, "Luftdruck");

    ui_label_airpressure_sensor_status = lv_label_create(ui_Panel18);
    lv_obj_set_width(ui_label_airpressure_sensor_status, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_airpressure_sensor_status, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_airpressure_sensor_status, 0);
    lv_obj_set_y(ui_label_airpressure_sensor_status, 157);
    lv_obj_set_align(ui_label_airpressure_sensor_status, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_airpressure_sensor_status, "Nicht verbunden");

    // ADDED CCH
    ui_image_sensor_status5 = lv_img_create(ui_Panel18);
    lv_img_set_src(ui_image_sensor_status5, &ui_img_581727398);
    lv_obj_set_width(ui_image_sensor_status5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_image_sensor_status5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_image_sensor_status5, 88);
    lv_obj_set_y(ui_image_sensor_status5, 159);
    lv_obj_set_align(ui_image_sensor_status5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_image_sensor_status5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_image_sensor_status5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_image_sensor_status5, 200);
    // ADDED CCH

    ui_Image14 = lv_img_create(ui_Panel18);
    lv_img_set_src(ui_Image14, &ui_img_1863824636);
    lv_obj_set_width(ui_Image14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image14, 80);
    lv_obj_set_y(ui_Image14, -180);
    lv_obj_set_align(ui_Image14, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image14, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image14, 200);

    ui_Label39 = lv_label_create(ui_Panel18);
    lv_obj_set_width(ui_Label39, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label39, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label39, 0);
    lv_obj_set_y(ui_Label39, 180);
    lv_obj_set_align(ui_Label39, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label39, "Ender 3 Pro");

    lv_obj_add_event_cb(ui_Screen_CHAT_CNC, ui_event_Screen_CHAT_CNC, LV_EVENT_ALL, NULL);

}
void ui_Alveo_Info_Screen_screen_init(void)
{
    ui_Alveo_Info_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Alveo_Info_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel17 = lv_obj_create(ui_Alveo_Info_Screen);
    lv_obj_set_width(ui_Panel17, 700);
    lv_obj_set_height(ui_Panel17, 400);
    lv_obj_set_align(ui_Panel17, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label12 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, -170);
    lv_obj_set_y(ui_Label12, -160);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "Status Alveo3D Filter");
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image11 = lv_img_create(ui_Panel17);
    lv_img_set_src(ui_Image11, &ui_img_close_png);
    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image11, 310);
    lv_obj_set_y(ui_Image11, -160);
    lv_obj_set_align(ui_Image11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image11, 270);

    ui_Label7 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 145);
    lv_obj_set_y(ui_Label7, 140);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Betriebsstunden");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label29 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label29, 145);
    lv_obj_set_y(ui_Label29, 45);
    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label29, "days");
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Panel17);
    lv_obj_set_width(ui_Arc1, 200);
    lv_obj_set_height(ui_Arc1, 200);
    lv_obj_set_x(ui_Arc1, -145);
    lv_obj_set_y(ui_Arc1, 20);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Arc1, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_Arc1, 20);
    lv_obj_set_style_arc_width(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xCB8800), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_Arc1, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -145);
    lv_obj_set_y(ui_Label14, 140);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "Filter Sattigung");
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label28 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label28, -145);
    lv_obj_set_y(ui_Label28, 45);
    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label28, "%");
    lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_filter_saturation = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_label_filter_saturation, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_filter_saturation, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_filter_saturation, -145);
    lv_obj_set_y(ui_label_filter_saturation, 0);
    lv_obj_set_align(ui_label_filter_saturation, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_filter_saturation, "80");
    lv_obj_set_style_text_font(ui_label_filter_saturation, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_operating_time = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_label_operating_time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_operating_time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_operating_time, 145);
    lv_obj_set_y(ui_label_operating_time, 0);
    lv_obj_set_align(ui_label_operating_time, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_operating_time, "13");
    lv_obj_set_style_text_font(ui_label_operating_time, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc2 = lv_arc_create(ui_Panel17);
    lv_obj_set_width(ui_Arc2, 200);
    lv_obj_set_height(ui_Arc2, 200);
    lv_obj_set_x(ui_Arc2, 145);
    lv_obj_set_y(ui_Arc2, 20);
    lv_obj_set_align(ui_Arc2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Arc2, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_Arc2, 20);
    lv_obj_set_style_arc_width(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0xFA0A0A), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc2, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_Arc2, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Image11, ui_event_Image11, LV_EVENT_ALL, NULL);

//     // ADDED CCH
    ui_image_sdcard_status = lv_img_create(ui_Panel17);
    lv_img_set_src(ui_image_sdcard_status, &ui_img_581727398);
    lv_obj_set_width(ui_image_sdcard_status, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_image_sdcard_status, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_image_sdcard_status, -20);
    lv_obj_set_y(ui_image_sdcard_status, -160);
    lv_obj_set_align(ui_image_sdcard_status, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_image_sdcard_status, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_image_sdcard_status, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_image_sdcard_status, 200);
//     // ADDED CCH
    

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen_DP_screen_init();
    ui_Screen_CHAT_CNC_screen_init();
    //ui_Alveo_Info_Screen_screen_init();
    lv_disp_load_scr(ui_Screen_DP);
}
