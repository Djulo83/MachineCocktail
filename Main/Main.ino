#include <Arduino.h>
#include "Wifi.h"
#include "Cocktail.h"
#include "Pompes.h"


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
    
    if (payload != ""){ 
      ChoixCocktail(payload);
      payload = "";
    }
 } 
}
