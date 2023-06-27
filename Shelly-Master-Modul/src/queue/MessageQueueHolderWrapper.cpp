#include "MessageQueueHolderWrapper.h"
#include "MessageQueueHolder.hpp"


bool send_message1(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout) {
    Message msg;
    msg.device_local = *device_local;
    msg.slider_local = *slider_local;
    msg.power_local = *power_local;
    return MessageQueueHolder::send_gui(msg, timeout);
}

bool receive_message1(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout) {
    Message msg;
    msg.device_local = *device_local;
    msg.slider_local = *slider_local;
    msg.power_local = *power_local;
    return MessageQueueHolder::receive_gui(msg, timeout);
}

bool send_cmd(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout) {
    Message msg;
    msg.device_local = *device_local;
    msg.slider_local = *slider_local;
    msg.power_local = *power_local;
    return MessageQueueHolder::send_cmd(msg, timeout);
}

bool receive_cmd(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout) {
    Message msg;
    msg.device_local = *device_local;
    msg.slider_local = *slider_local;
    msg.power_local = *power_local;
    return MessageQueueHolder::receive_cmd(msg, timeout);
}