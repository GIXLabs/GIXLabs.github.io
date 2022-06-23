#include <SoftwareSerial.h>
#include "Wire.h"
#include <Servo.h>

SoftwareSerial BTserial(2, 3); // RX | TX

char t;
const int B1A = 10;
const int B1B = 11;
Servo servo_1;
int ang_int = 90;
int velocity = 255;


// constants won't change. They're used here to set pin numbers:
const int buttonPin = 8;     // the number of the pushbutton pin
const int ledPin =  12  ;      // the number of the LED pin
int buttonState = 0;         // variable for reading the pushbutton status
int duration = 0;



void setup() {


  pinMode(B1A, OUTPUT);
  pinMode(B1B, OUTPUT);
  
  
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

  Serial.begin(9600);
  BTserial.begin(9600);
  BTserial.print("AT+NAME");
  BTserial.print("RC_02");
  servo_1.attach(7);
  servo_1.write(ang_int);
  delay(1000);
}



void loop() {
  
  buttonState = digitalRead(buttonPin);
  t = BTserial.read();
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH.
  // long press 3s for reset:
  if (buttonState == HIGH) {
    // turn LED on:
    duration++;
    Serial.println(duration);
    digitalWrite(ledPin, HIGH);
  } 
  else if (buttonState == LOW && duration > 300){
    // turn LED off:
    duration = 0;
    digitalWrite(ledPin, LOW);
  }else{
    duration = 0;
  }



  if (t == '0') {
    velocity = 0;
  }  else if (t == '1') {
    velocity = 100;
  } else if (t == '2') {
    velocity = 180;
  } else if (t == '3') {
    velocity = 200;
  } else if (t == '4') {
    velocity = 255;
  }

  if (t == 'F') {
    analogWrite(B1A, 0);
    analogWrite(B1B,  velocity);
    servo_1.write(ang_int);
  }  else if (t == 'L') {
    analogWrite(B1A, 0);
    analogWrite(B1B,  velocity);
    servo_1.write(ang_int + 45);
  }  else if (t == 'R') {
    analogWrite(B1A, 0);
    analogWrite(B1B, velocity);
    servo_1.write(ang_int - 45);
  }  else if (t == 'G') {
    analogWrite(B1A, 0);
    analogWrite(B1B, velocity);
    servo_1.write(ang_int + 15);
  }  else if (t == 'I') {
    analogWrite(B1A, 0);
    analogWrite(B1B, velocity);
    servo_1.write(ang_int - 15);
  } else if (t == 'B') {
    analogWrite(B1A, velocity);
    analogWrite(B1B, 0);
    servo_1.write(ang_int);
  }  else if (t == 'H') {
    analogWrite(B1A, velocity);
    analogWrite(B1B, 0);
    servo_1.write(ang_int + 30);
  }  else if (t == 'J') {
    analogWrite(B1A, velocity);
    analogWrite(B1B, 0);
    servo_1.write(ang_int - 30);
  }  else if (t == 'S') {
    analogWrite(B1A, 0);
    analogWrite(B1B, 0);
    servo_1.write(ang_int);
  }

}
