#include <Arduino.h>
#include <NewPing.h>

NewPing sonar (10, 11, 500);


void setup() {
  Serial.begin(9600);
  delay(50);
}

void loop() {
  Serial.print("avstånd:");
  Serial.println(sonar.ping_cm());
  delay(500);
}