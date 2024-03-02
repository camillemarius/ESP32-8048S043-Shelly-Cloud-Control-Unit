// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui_events.h"


void event_switch_power_ender(lv_event_t * e)
{
	send_data_package_to_esp(0, _Power_Ender3Pro_, 
							ui_Switch_Power_Ender, NULL);
}

void event_slider_brightness_ender(lv_event_t * e)
{
	// Your code here
	update_slider_by_state_change(ui_Slider_Brightness_Light_Ender,ui_Switch_Power_Light_Ender);
	send_data_package_to_esp(0, _Helligkeit_Licht_Ender3Pro_, 
							ui_Switch_Power_Light_Ender, ui_Slider_Brightness_Light_Ender);
}

void event_switch_power_light_ender(lv_event_t * e)
{
	// Your code here
	update_switch_by_value_change(ui_Switch_Power_Light_Ender, ui_Slider_Brightness_Light_Ender);
	send_data_package_to_esp(0, _Power_Licht_Ender3Pro_, 
							ui_Switch_Power_Light_Ender, ui_Slider_Brightness_Light_Ender);
}

void event_slider_speed_alveo3d(lv_event_t * e)
{
	// Your code here
	update_slider_by_state_change(ui_Slider_Speed_Alveo3D,ui_Switch_Power_Alveo3D);
	send_data_package_to_esp(0, _Speed_Alveo3D_, 
							ui_Switch_Power_Alveo3D, ui_Slider_Speed_Alveo3D);
}

void event_power_alveo3d(lv_event_t * e)
{
	// Your code here
	update_switch_by_value_change(ui_Switch_Power_Alveo3D, ui_Slider_Speed_Alveo3D);
	send_data_package_to_esp(0, _Power_Alveo3D_, 
							ui_Switch_Power_Alveo3D, ui_Slider_Speed_Alveo3D);
}

void event_switch_power_xiaomi(lv_event_t * e)
{
	// Your code here
	send_data_package_to_esp(0, _Power_Xiaomi_Ender3Pro_, 
							ui_Switch_Power_Xiaomi, NULL);
}

void event_switch_power_chatcnc(lv_event_t * e)
{
	// Your code here
	send_data_package_to_esp(0, _Power_ChatCnc_, 
							ui_Switch_Power_Chatcnc, NULL);
}

void event_switch_power_light_chatcnc(lv_event_t * e)
{
	// Your code here
	update_switch_by_value_change(ui_Switch_Power_Light_Chatcnc, ui_Slider_Brightness_Light_Chatcnc);
	send_data_package_to_esp(0, _Power_Licht_ChatCnc_, 
							ui_Switch_Power_Light_Chatcnc, ui_Slider_Brightness_Light_Chatcnc);

}

void event_slider_brightness_chatcnc(lv_event_t * e)
{
	// Your code here
	update_slider_by_state_change(ui_Slider_Brightness_Light_Chatcnc,ui_Switch_Power_Light_Chatcnc);
	send_data_package_to_esp(0, _Helligkeit_Licht_ChatCnc_, 
							ui_Switch_Power_Light_Chatcnc, ui_Slider_Brightness_Light_Chatcnc);
}
