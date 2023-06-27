#pragma once
#include "MessageQueue.hpp"
#include "Message.h"



class MessageQueueHolder {
    public:
        static MessageQueueHolder& instance();
        static bool send_gui(const Message& message, TickType_t timeout);
        static bool receive_gui(Message& message, TickType_t timeout);
        static bool send_cmd(const Message& message, TickType_t timeout);
        static bool receive_cmd(Message& message, TickType_t timeout);
        static bool send_sd_save(const SD_Message& message, TickType_t timeout);
        static bool receive_sd_save(SD_Message& message, TickType_t timeout);
        static bool send_sd_read(const SD_Message& message, TickType_t timeout);
        static bool receive_sd_read(SD_Message& message, TickType_t timeout);

    private:
        MessageQueueHolder();
        MessageQueue_GUI<Message>      queue_gui;
        MessageQueue_CMD<Message>      queue_cmd;
        MessageQueue_SD_save<SD_Message>   queue_sd_save;
        MessageQueue_SD_read<SD_Message>   queue_sd_read;
};
