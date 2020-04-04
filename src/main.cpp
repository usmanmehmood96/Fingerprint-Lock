#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(57600);
  Serial.begin(57600);
}

void loop() {
  
  while (Serial.available())
    Serial1.write(Serial.read());
  while (Serial1.available())
    Serial.write(Serial1.read());
}