#include "shellyCloud.hpp"
#include "ui/ui.h"

shellyCloud::shellyCloud() {
   
}

void shellyCloud::init() {
  //WiFi.begin(ssid, password);
  WiFi.begin(ssid, password);

  // With the modified line
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
    //lv_label_set_text(ui_Label16, "Connected to wifi");
  }
  //lv_label_set_text(ui_Label16, "Connected to wifi");
  client.setInsecure(); // Use this if the server has a self-signed certificate
  //lv_label_set_text(ui_Label16, "set Insecure");
}

void shellyCloud::setRelay(String id, int channel, boolean status) {
  if (WiFi.status() == WL_CONNECTED) {

    // Set the server URI and the client
    const char *path_relay = "/relay/control/";
    //const char path_relay[] PROGMEM = "/relay/control/";
    String url = String(url_host) + String(path_relay);
    //char url[100];
    //strcpy_P(url, url_host);  // Copy url_host from PROGMEM to a char array
    //strcat(url, path_relay);  // Concatenate url_host and path_relay

  
    client.setInsecure(); // Use this if the server has a self-signed certificate
    if (!http.begin(client, url)) {
      //lv_label_set_text(ui_Label16, "Failed connect");
      delay(5000);
      return;
    }

    // Set the headers
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    
    // Construct the request body
    String state = (status == false) ? "off" : "on";
    String postData = "id=" + id + "&turn=" + state + "&channel=" + String(channel) + "&auth_key=" + String(auth_key);
    // With this modified code
    //char postData[100];
    //sprintf(postData, "id=%s&turn=%s&channel=%d&auth_key=%s", id.c_str(), state.c_str(), channel, auth_key);

    // Send the POST request
    int httpResponseCode = http.POST(postData);

    if (httpResponseCode > 0) {
      if (httpResponseCode == HTTP_CODE_MOVED_PERMANENTLY) {
        // Handle the redirect
        String newURL = http.header("Location");

        // Update the server URI and send a new request
        //client.setInsecure(); // Use this if the server has a self-signed certificate
        if (!http.begin(client, newURL)) {
          
          return;
        }
        httpResponseCode = http.POST(postData);
      } else {
        String response = http.getString();

        char str_value[10];
        sprintf(str_value, "%d", response);
        //lv_label_set_text(ui_Label16, str_value);
      }
    } else {
      // Print the response body
      String responseBody = http.getString();
      ////lv_label_set_text(ui_Label16, responseBody.c_str());
      
      char str_value[10];
      sprintf(str_value, "%d", httpResponseCode);
      //lv_label_set_text(ui_Label16, str_value);
      
    }

    http.end();
  } else {
    //lv_label_set_text(ui_Label16, "wifi lost");
    init();
  }
  delay(1000);
}

void shellyCloud::getStatus(String id) {
  if (WiFi.status() == WL_CONNECTED) {

    // Set the server URI and the client
    const char *path__status = "/status/";
    //const char path__status[] PROGMEM = "/status/";
    String url = String(url_host) + String(path__status);
    //char url[100];
    //strcpy_P(url, url_host);  // Copy url_host from PROGMEM to a char array
    //strcat(url, path__status);  // Concatenate url_host and path__status
    
    //client.setInsecure(); // Use this if the server has a self-signed certificate
    if (!http.begin(client, url)) {
      Serial.println("Failed to connect");
      delay(5000);
      return;
    }

    // Set the headers
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    
    // Construct the request body
    String postData = "id=" + id + "&auth_key=" + String(auth_key);
    //char postData[100];
    //strcpy(postData, "id=");
    //strcat(postData, id.c_str());
    //strcat(postData, "&auth_key=");
    //strcat(postData, auth_key);
    
    // Send the POST request
    int httpResponseCode = http.POST(postData);

    if (httpResponseCode > 0) {
        Serial.print("HTTP Response code: ");
        Serial.println(httpResponseCode);
        //handleResponse(http);

        // Parse the response and extract the relay state as needed
        // ...
    } else {
      Serial.print("HTTP POST request failed with error code: ");
      Serial.println(httpResponseCode);

      // Print the response body
      String responseBody = http.getString();
      Serial.println("Response body:");
      Serial.println(responseBody);
    }

    http.end();
  } else {
    Serial.println("WiFi connection lost");
  }

  delay(1000);
}

void shellyCloud::handleResponse(HTTPClient& http) {
  String response = http.getString();
  Serial.println(response);

  // Parse the response and extract the relay state as needed
  // DynamicJsonDocument doc(http.getSize());
  // DeserializationError error = deserializeJson(doc, response);

  // if (error) {
  //   Serial.print("JSON parsing failed: ");
  //   Serial.println(error.c_str());
  //   return;
  // }

  // // Extract power and total values
  // int power1 = doc["data"]["device_status"]["meters"][0]["power"];
  // int total1 = doc["data"]["device_status"]["meters"][0]["total"];
  // int power2 = doc["data"]["device_status"]["meters"][1]["power"];
  // int total2 = doc["data"]["device_status"]["meters"][1]["total"];

  // // Print the extracted values
  // Serial.print("Meter 1 - Power: ");
  // Serial.println(power1);
  // Serial.print("Meter 1 - Total: ");
  // Serial.println(total1);
  // Serial.print("Meter 2 - Power: ");
  // Serial.println(power2);
  // Serial.print("Meter 2 - Total: ");
  // Serial.println(total2);
    
}

