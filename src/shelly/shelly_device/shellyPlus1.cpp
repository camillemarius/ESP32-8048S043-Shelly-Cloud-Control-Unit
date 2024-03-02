#include "shelly/shelly_device/shellyPlus1.hpp"

shellyPlus1::shellyPlus1(const char* device_id, shellyCloud& shelycloud) 
:id(device_id),
shellycloudRef(shelycloud){

}

String shellyPlus1::getPower(int channel) {
    shellycloudRef.getStatus(id);
    return "ABC";
}

void shellyPlus1::setRelay(int channel, boolean power){
    shellycloudRef.setRelay(id,channel,power);
    
}