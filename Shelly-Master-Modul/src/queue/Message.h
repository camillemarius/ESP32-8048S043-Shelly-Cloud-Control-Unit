#ifndef MESSAGE_H
#define MESSAGE_H

#include <Arduino.h>



struct Message {
        int16_t device_local;
        int16_t slider_local;
        bool power_local;
};

// struct SD_Message {
//         char directory[20];
//         //char filename[10];
//         char data[100];
// };

struct SD_Message {
        int16_t device_local;
        char data[100];
};


enum _device_id_ {
    _Power_Zentrale_ = 0,
    _Power_Ender3Pro_ = 1,
    _Power_Licht_Ender3Pro_ = 2,
    _Power_Alveo3D_ = 3,
    _Power_Xiaomi_Ender3Pro_ = 4,
    _Power_ChatCnc_ = 5,
    _Power_Licht_ChatCnc_ = 6,
    _Power_ControlUnit_ = 7,
    _Power_Octoprint_ = 8,

    _Speed_Alveo3D_ = 9,
    _Helligkeit_Licht_Ender3Pro_ = 10,
    _Helligkeit_Licht_ChatCnc_ = 11,
    
    _Airquality_Ender3Pro_1 = 12,
    _Airquality_Ender3Pro_25 = 13,
    _Airquality_Ender3Pro_10 = 14,
    _Temperature_Ender3Pro_ = 15,
    _Humidity_Ender3Pro_ = 16,
    _Pressure_Ender3Pro_ = 17,

    _Alvero_Stat_ = 18,

    _Control_Control_Unit = 98,
    _Control_Remote_Access = 99
};

// 

#endif // MESSAGE_H















