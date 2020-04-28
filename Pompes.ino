#define relay1 D0

void initPompes(){
  pinMode(relay1, OUTPUT);
}

void Pompe1(){
  digitalWrite(relay1, HIGH);
  delay(2000);
  digitalWrite(relay1, LOW);
  delay(2000);

}
