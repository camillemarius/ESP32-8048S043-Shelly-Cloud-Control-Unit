#include <Arduino.h>
#include "ui/vTask_lvgl.hpp"
#include "shelly/vTask_shelly.hpp"
//#include "esp_now_prot/vTask_com.hpp"
//#include "alveo3d/vTask_alveo3d.hpp"
//#include "nonVolatileMemory/vTask_sdcard.hpp"



void setup()
{
  //WiFi.mode(WIFI_STA);
  //Serial.begin(115200);
  
  
  //vTask_com::CreateResources(3);
  
  vTask_lvgl::CreateResources(1);
  vTask_shelly::CreateResources(3);

  //vTask_sdcard::CreateResources(4);
  //vTask_alveo3d::CreateResources(5);
}
void loop()
{
  delay(5000);
}