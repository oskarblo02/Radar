#include <Arduino.h>
#include <NewPing.h>
#include <Servo.h>

Servo name_servo;

NewPing sonar (10, 11, 500); // 10: trig_pin 11: echo_pin 500: distance_cm

int servo_position = 0;

void setup() {
  Serial.begin(9600);
  name_servo.attach (9);
  delay(50);
}

void loop() {
    for (servo_position =0; servo_position <=180; servo_position +=2){
    name_servo.write(servo_position);
    Serial.print("grader: ");
    Serial.println(servo_position); 
    Serial.print("avstånd: ");
    Serial.println(sonar.ping_cm());
    delay(50);
  }
  for (servo_position =180; servo_position >=0; servo_position -=2){
    name_servo.write(servo_position);
    Serial.print("grader: ");
    Serial.println(servo_position); 
    Serial.print("avstånd:");
    Serial.println(sonar.ping_cm());
    delay(50);
  }
}
