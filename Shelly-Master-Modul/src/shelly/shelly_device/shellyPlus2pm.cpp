#include "shelly/shelly_device/shellyPlus2pm.hpp"
#include "ui/ui.h"

shellyPlus2pm::shellyPlus2pm(const char* device_id, shellyCloud& shelycloud) 
:id(device_id),
shellycloudRef(shelycloud){

}

String shellyPlus2pm::getPower(int channel) {
    shellycloudRef.getStatus(id);
    return "ABC";
}

void shellyPlus2pm::setRelay(int channel, boolean power){
    
    // TO DELETE
    char str_value[10];
    sprintf(str_value, "setRalay: %d", power);
    //lv_label_set_text(ui_Label16, str_value);
    shellycloudRef.setRelay(id,channel,power);
}