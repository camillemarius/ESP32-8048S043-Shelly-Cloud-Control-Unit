
#include "MessageQueueHolder.hpp"

MessageQueueHolder::MessageQueueHolder() {
    
}

MessageQueueHolder& MessageQueueHolder::instance() {
    static MessageQueueHolder holder;
    return holder;
}

bool MessageQueueHolder::send_gui(const Message& message, TickType_t timeout) {
    return instance().queue_gui.send(message, timeout);
}

bool MessageQueueHolder::receive_gui(Message& message, TickType_t timeout) {
    return instance().queue_gui.receive(message, timeout);
}

bool MessageQueueHolder::send_cmd(const Message& message, TickType_t timeout) {
    return instance().queue_cmd.send(message, timeout);
}

bool MessageQueueHolder::receive_cmd(Message& message, TickType_t timeout) {
    return instance().queue_cmd.receive(message, timeout);
}

bool MessageQueueHolder::send_sd_save(const SD_Message& message, TickType_t timeout) {
    return instance().queue_sd_save.send(message, timeout);
}

bool MessageQueueHolder::receive_sd_save(SD_Message& message, TickType_t timeout) {
    return instance().queue_sd_save.receive(message, timeout);
}


bool MessageQueueHolder::send_sd_read(const SD_Message& message, TickType_t timeout) {
    return instance().queue_sd_read.send(message, timeout);
}

bool MessageQueueHolder::receive_sd_read(SD_Message& message, TickType_t timeout) {
    return instance().queue_sd_read.receive(message, timeout);
}

