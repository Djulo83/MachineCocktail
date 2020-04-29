#include "Pompes.h"

#define relay1 D0


void initPompes(){
  pinMode(relay1, OUTPUT);
}

void Pompe1(){
  digitalWrite(relay1, HIGH);
  delay(6000);
  digitalWrite(relay1, LOW);
  delay(6000);

}
