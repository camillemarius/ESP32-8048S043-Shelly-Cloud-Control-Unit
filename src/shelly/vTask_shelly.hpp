#pragma once

#include <Arduino.h>
#include "controlCabinet.hpp"

#include "queue/MessageQueueHolder.hpp"
#include "queue/Message.h"


//extern esp_now_com msg_to_send;
//extern QueueHandle_t xQueue_espnow_out;
//extern QueueHandle_t xQueue_espnow_in;

class vTask_shelly {
    public:
        vTask_shelly();
        static vTask_shelly& GetInstance(void);
        static void CreateResources(int priority);
        static void Run(void *p);

    private:
        void shelly_task_init(const int priority);
        void read_from_msgq(); 
        bool takeShellySemaphore();
        bool giveShellySemaphore();

    private:
        TaskHandle_t shelly_Task;
        SemaphoreHandle_t shellySemaphore;
        
        controlCabinet controlcabinet;
};
