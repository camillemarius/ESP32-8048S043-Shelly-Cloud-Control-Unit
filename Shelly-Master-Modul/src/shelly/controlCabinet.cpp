#include "shelly/controlCabinet.hpp"

controlCabinet::controlCabinet()
    :ctr_al3_oct("C45BBE6B408A",shellycld),
    ctr_xaf_ctrsen("C45BBE6B408A",shellycld),
    ctr_l3d_lch("C45BBE6B408A",shellycld),
    ctr_cnc("C45BBE6B408A",shellycld), 
    ctr_3dp("C45BBE6B408A",shellycld)  {
}

void controlCabinet::init() {
    shellycld.init();
}