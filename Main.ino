#include "Main.h"
#include "Wifi.h"
#include "Cocktail.h"
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

unsigned long previousMillis = 0; 
const long interval = 10000; 
String payload = "";
void setup() {
  initWifi();
  initPompes();

}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    payload = getPayload();
  }
  ChoixCocktail(payload);
}
