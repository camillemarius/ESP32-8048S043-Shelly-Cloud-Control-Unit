#include "ui_refresh.h"

void update_slider_by_state_change (const lv_obj_t* slider_obj, lv_obj_t* switch_obj) {

	int32_t value = lv_slider_get_value(slider_obj);

	if(value <= 0) {
		lv_obj_clear_state(switch_obj,LV_STATE_CHECKED);
	}
	else {
		lv_obj_add_state(switch_obj,LV_STATE_CHECKED);
	}
	
}

void update_switch_by_value_change (const lv_obj_t* switch_obj, lv_obj_t* slider_obj) {
	
	bool state = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
	if(state == false) {
		lv_slider_set_value(slider_obj,0,LV_ANIM_ON);
	} else {
		lv_slider_set_value(slider_obj,100,LV_ANIM_ON);
	}
}

void send_data_package_to_esp (int *esp_id, int *device_id, const lv_obj_t* switch_obj, lv_obj_t* slider_obj) {

	bool state = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
	int16_t value = 1024;
	if(slider_obj != NULL) {	
		value = lv_slider_get_value(slider_obj);
	}

	 
	struct Message msg;
	msg.device_local = device_id;
	msg.power_local = state;
	msg.slider_local = value;

    bool error = send_cmd(&msg.device_local , &msg.slider_local, &msg.power_local, portMAX_DELAY);



    
  // // TO DELETE
  // char str_value[10];
  // sprintf(str_value, "%d", msg_receive_esp.slider_local);
  // lv_label_set_text(ui_label_temp_ender, str_value);
	//write_to_queue_wrapper(msg);


	// if(xQueue_espnow_out != NULL) {
	// 	struct message msg;
	// 	msg.device_local = device_id;
	// 	msg.power_local = state;
	// 	msg.slider_local = value;
	// 	xQueueSend(xQueue_espnow_out, (void *) &msg, portMAX_DELAY);
	// }
}
