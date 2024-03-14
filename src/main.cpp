#include <Arduino.h>
#include "ui/vTask_lvgl.hpp"
#include "shelly/vTask_shelly.hpp"
//#include "ui/ui.h"
//#include "esp_now_prot/vTask_com.hpp"
//#include "alveo3d/vTask_alveo3d.hpp"
//#include "nonVolatileMemory/vTask_sdcard.hpp"

extern "C" void vApplicationStackOverflowHook(TaskHandle_t xTask, char* pcTaskName)
{
    // Handle the stack overflow event
    // You can log an error message or take appropriate action here
    //lv_label_set_text(ui_Label34, "StackOverflow");
}


void setup()
{
  //WiFi.mode(WIFI_STA);
  //Serial.begin(115200);
  
  
  //vTask_com::CreateResources(3);
  
  vTask_lvgl::CreateResources(1);
  //vTask_shelly::CreateResources(1);

}
void loop()
{
  delay(5000);
}