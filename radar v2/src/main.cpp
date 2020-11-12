#include <Arduino.h>
#include <Servo.h>
#include <NewPing.h>

const int trigPin=10;
const int echoPin=11;

long duration;
int distance;

Servo servo; // names the servo library to servo

NewPing sonar (10, 11, 500); //  trig_pin:10  echo_pin:11  distance_cm:500cm and names the NewPing library to sonar

void setup() {
  
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

  servo.attach(9); // servo to pin9 
}

void loop()
{
    for(int i=0;i<=180;i++){            // rotates the servo motor from 0 to 180 degrees
    servo.write(i);
    delay(10);
    distance = sonar.ping_cm();

    Serial.print(i);                      // sends the current degree into the Serial Port
    Serial.print(",");                   // sends addition character right next to the previous value needed later in the Processing IDE for indexing
    Serial.print(distance);                // sends the distance value into the Serial Port
    Serial.print(".");                   // sends addition character right next to the previous value needed later in the Processing IDE for indexing
      }

    for(int i=180;i>0;i--){  
    servo.write(i);
    delay(10);
    distance = sonar.ping_cm();
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
    }

}

int calDist()
{
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
                                                               
  digitalWrite(trigPin, HIGH);  // sets the trigPin on HIGH state for 10 micro seconds
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
                                                              
  duration = pulseIn(echoPin, HIGH);   // reads the echoPin, returns the sound wave travel time in microseconds
                                                             
  distance= duration*0.034/2;  // calculating the distance; range = 2cm to 500 cm

  return distance;
}
