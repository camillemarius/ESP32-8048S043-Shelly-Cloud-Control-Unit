#pragma once

#include <Arduino.h>
#include "shelly/shelly_cloud/shellyCloud.hpp"


class shellyPlus2pm{
    public:
        shellyPlus2pm(const char* device_id, shellyCloud& cloud);
        String getPower(int channel);
        void setRelay(int channel, boolean power);

    private:
        const char* id;
        shellyCloud& shellycloudRef;

};