#ifndef MESSAGE_QUEUE_HOLDER_WRAPPER_H
#define MESSAGE_QUEUE_HOLDER_WRAPPER_H

#include "Arduino.h"

#ifdef __cplusplus
extern "C" {
#endif


#include "Message.h"

// Wrapper functions for MessageQueueHolder::send_gui and receive_gui
bool send_message1(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout);
bool receive_message1(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout);

// Wrapper functions for MessageQueueHolder::send_cmd and receive_cmd
bool send_cmd(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout);
bool receive_cmd(int16_t* device_local , int16_t* slider_local, bool* power_local, uint32_t timeout);

#ifdef __cplusplus
}
#endif

#endif /* MESSAGE_QUEUE_HOLDER_WRAPPER_H */