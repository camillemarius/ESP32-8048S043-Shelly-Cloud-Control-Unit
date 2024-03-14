#include "shelly/controlCabinet.hpp"

controlCabinet::controlCabinet()
    :ctr_al3_oct("08b61fcded6c",shellycld),
    ctr_xaf_ctrsen("08b61fcded6c",shellycld),
    ctr_l3d_lch("08b61fcded6c",shellycld),
    ctr_cnc("08b61fcded6c",shellycld), 
    ctr_3dp("08b61fcded6c",shellycld)  {
}

void controlCabinet::init() {
    shellycld.init();
}