#pragma once
#include <Arduino.h>
#include "Message.h"

template<typename T>
class IMessageQueue {
    public:
        virtual bool send(const T& message, TickType_t timeout) = 0;
        virtual bool receive(T& message, TickType_t timeout) = 0;
};


template<typename T>
class MessageQueue : public IMessageQueue<T> {
    public:
        MessageQueue(size_t queueSize);
        bool send(const T& message, TickType_t timeout) override;
        bool receive(T& message, TickType_t timeout) override;

    protected:
        QueueHandle_t queueHandle_;
        SemaphoreHandle_t mutex_;// = xSemaphoreCreateMutex();
};

template<typename T>
MessageQueue<T>::MessageQueue(size_t queueSize) 
    : queueHandle_(xQueueCreate(queueSize, sizeof(T))),
      mutex_(xSemaphoreCreateMutex()) 
{
    xSemaphoreGive(mutex_);
}

template<typename T>
bool MessageQueue<T>::send(const T& message, TickType_t timeout) {
    if (xSemaphoreTake(mutex_, timeout) == pdTRUE) {
        bool result = xQueueSend(queueHandle_, &message, timeout) == pdPASS;
        xSemaphoreGive(mutex_);
        return result;
    } else {
        return false;
    }
}

template<typename T>
bool MessageQueue<T>::receive(T& message, TickType_t timeout) {
    if (xSemaphoreTake(mutex_, timeout) == pdTRUE) {
        bool result = xQueueReceive(queueHandle_, &message, timeout) == pdPASS;
        xSemaphoreGive(mutex_);
        return result;
    } else {
        return false;
    }
}
//------------------------------------------------------
template<typename T>
class MessageQueue_GUI : public MessageQueue<T> {
    public:
     MessageQueue_GUI();
};

template<typename T>
MessageQueue_GUI<T>::MessageQueue_GUI() : MessageQueue<T>(5) {

}

//------------------------------------------------------
template<typename T>
class MessageQueue_CMD : public MessageQueue<T> {
    public:
        MessageQueue_CMD();
};

template<typename T>
MessageQueue_CMD<T>::MessageQueue_CMD() : MessageQueue<T>(8) {
    
}

//------------------------------------------------------
template<typename T>
class MessageQueue_SD_save : public MessageQueue<T> {
    public:
        MessageQueue_SD_save();
};

template<typename T>
MessageQueue_SD_save<T>::MessageQueue_SD_save() : MessageQueue<T>(12) {
    
}

//------------------------------------------------------
template<typename T>
class MessageQueue_SD_read : public MessageQueue<T> {
    public:
        MessageQueue_SD_read();
};

template<typename T>
MessageQueue_SD_read<T>::MessageQueue_SD_read() : MessageQueue<T>(12) {
    
}

//#include "MessageQueue_cpp.hpp"
// template class MessageQueue<Message>;
// template class MessageQueue_GUI<Message>;
// template class MessageQueue_CMD<Message>;







