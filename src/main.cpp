#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(500);
}

void loop() {
  Serial.println("Hello World");
  delay(3000);
}