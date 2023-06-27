#include "vTask_shelly.hpp"
#include "ui/ui.h"

vTask_shelly& vTask_shelly::GetInstance(void){
    static vTask_shelly instance;
    return instance;
}

void vTask_shelly::CreateResources(int priority) {
    vTask_shelly& r_this = vTask_shelly::GetInstance();
    r_this.shelly_task_init(priority);
}

vTask_shelly::vTask_shelly() {

}

void vTask_shelly::read_from_msgq() {
    Message msg;
    if(MessageQueueHolder::receive_cmd(msg, 10)) {
        vTask_shelly& r_this = GetInstance();
        // TO DELETE
        char str_value[10];
        sprintf(str_value, "%d", msg.power_local);
        //lv_label_set_text(ui_Label16, str_value);
        r_this.controlcabinet.ctr_cnc.setRelay(0,msg.power_local);
    }
}

void vTask_shelly::Run(void *p)
{   
    vTask_shelly& r_this = GetInstance();
    delay(5000);
    
    lv_label_set_text(ui_Label16, "Try to init");
    r_this.controlcabinet.init();
    r_this.controlcabinet.ctr_cnc.setRelay(0,true);
    delay(1000);
    r_this.controlcabinet.ctr_cnc.setRelay(0,false);
    //Message msg;
    //msg.device_local = 0;
    //msg.power_local = false;
    //msg.slider_local = 0; 
    //MessageQueueHolder::send_cmd(msg,10);
    
    // TO DELETE
    //char str_value[10];
    //sprintf(str_value, "%d", "Sucess to read");
    lv_label_set_text(ui_Label16, "Connected to cloud");

    while (true)
    {
        //r_this.read_from_msgq();
        r_this.controlcabinet.ctr_3dp.setRelay(0,true);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        r_this.controlcabinet.ctr_3dp.setRelay(0,false);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void vTask_shelly::shelly_task_init(const int priority)
{
    xTaskCreate(this->Run, "shelly-Task", 20000, NULL, priority, &shelly_Task);
}