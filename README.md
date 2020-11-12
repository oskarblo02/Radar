# Radar
I will make a radar with an Arduino, ultrasonic sensor and a servo motor. The ultrasonic sensor will be attached on the servo and register the length to an boject for each degree the servo turns and draw it on the screen with [Processing 3](https://processing.org/download/). 
## How to use
- Use radar v2 and Draw_radarv2 for the working product (radar is a sonar and mesures distance)
- Control that you use the correct usb port, the preset in the code is COM5 (You can change that to your preference)
- Send the C++ code from radar v2 to the Arduino
- Start the Processing code in Processing 3
### Software
- [Processing 3](https://processing.org/download/)
#### Arduino librarys
- Arduino.h
  - Connects your computer to the arduino
- NewPing.h
  - Imports the data to the arduino to understand how the ultrasonic sensor works
- Servo.h
  - Imports the data to the arduino to understand how the servo works
### Parts used
- [Ultrasonic Sensor: HY-SRF05](https://www.electrokit.com/produkt/avstandsmatare-ultraljud-hy-srf05-2-450cm/) 
- [Servo: SM-S2309S](https://www.amazon.com/SpingRC-SM-S2309S-Micro-analog-plastic/dp/B01CV7CPL6)
- [Arduino: UNO R3](https://www.electrokit.com/produkt/arduino-uno-mega328-rev-3/)
