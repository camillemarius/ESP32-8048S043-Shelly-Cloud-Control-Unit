#pragma once
#include <Arduino.h>
#include "shelly/shelly_device/shellyPlus2pm.hpp"
#include "shelly/shelly_device/shellyPlus1.hpp"
#include "shelly/shelly_cloud/shellyCloud.hpp"


class controlCabinet {
    public:
        controlCabinet();
        void init();

    private:

    public:
        shellyPlus2pm ctr_al3_oct;
        shellyPlus2pm ctr_xaf_ctrsen;
        shellyPlus2pm ctr_l3d_lch;
        shellyPlus2pm ctr_cnc;
        shellyPlus1 ctr_3dp;

    private:
        shellyCloud shellycld;

    

};