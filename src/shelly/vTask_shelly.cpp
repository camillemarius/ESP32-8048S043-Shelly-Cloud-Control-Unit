#include "vTask_shelly.hpp"
#include "ui/ui.h"

vTask_shelly& vTask_shelly::GetInstance(void){
    static vTask_shelly instance;
    return instance;
}

void vTask_shelly::CreateResources(int priority) {
    vTask_shelly& r_this = vTask_shelly::GetInstance();

    r_this.shellySemaphore = xSemaphoreCreateBinary();
    (void) r_this.giveShellySemaphore();
    r_this.createTask(priority);
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
bool vTask_shelly::takeShellySemaphore()
{
    return xSemaphoreTake(shellySemaphore, 0);
}

bool vTask_shelly::giveShellySemaphore()
{
    return xSemaphoreGive(shellySemaphore);
}

void vTask_shelly::Run(void *p)
{   
    vTask_shelly& r_this = GetInstance();
    vTaskDelay(2000 / portTICK_PERIOD_MS);
    
    //lv_label_set_text(ui_Label17, "Try to init");
    r_this.controlcabinet.init();
    //r_this.controlcabinet.ctr_cnc.setRelay(0,true);
    //delay(1000);
    //r_this.controlcabinet.ctr_cnc.setRelay(0,false);
    //Message msg;
    //msg.device_local = 0;
    //msg.power_local = false;
    //msg.slider_local = 0; 
    //MessageQueueHolder::send_cmd(msg,10);
    
    // TO DELETE
    //char str_value[10];
    //sprintf(str_value, "%d", "Sucess to read");
    //lv_label_set_text(ui_Label17, "Connected to cloud");

    while (true)
    {
        
        if(r_this.takeShellySemaphore() == pdTRUE) {
            //r_this.read_from_msgq();
            //lv_label_set_text(ui_Label17, "Turn on");
            r_this.controlcabinet.ctr_3dp.setRelay(1,true);
            vTaskDelay(500 / portTICK_PERIOD_MS);
            //lv_label_set_text(ui_Label17, "Turn off");
            r_this.controlcabinet.ctr_3dp.setRelay(1,false);
            vTaskDelay(500 / portTICK_PERIOD_MS);
            
            //UBaseType_t stackWatermark = uxTaskGetStackHighWaterMark(NULL);
            //char str_value[10];
            //sprintf(str_value, "%d", stackWatermark);
            ////lv_label_set_text(ui_Label34, str_value);
            r_this.giveShellySemaphore();
        } else {
            //lv_label_set_text(ui_Label34, "faster");
        }
        //vTaskDelay(1000 / portTICK_PERIOD_MS);

        }
}

void vTask_shelly::createTask(const int priority)
{
    xTaskCreate(this->Run, "shelly-Task", 50000, NULL, priority, &shelly_Task);
}