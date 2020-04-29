#ifndef Wifi_H_
#define Wifi_H_
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

void initWifi();

String getPayload();

#endif
