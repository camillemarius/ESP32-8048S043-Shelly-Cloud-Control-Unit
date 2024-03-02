#pragma once

#include <Arduino.h>
//#include <ESP8266WiFi.h>
//#include <WiFi.h>
#include <WiFiClientSecure.h>
//#include <ESP8266HTTPClient.h>
#include <HTTPClient.h>
//#include <ArduinoJson.h>

#include "shellyCloud_config.hpp"

class shellyCloud {
    public:
        shellyCloud();
        void init();
        void getStatus(String id);
        void setRelay(String id, int channel, boolean status);
        void Run();
    private:
        void handleResponse(HTTPClient& http);

    private:
        WiFiClientSecure client;
        HTTPClient http;


};