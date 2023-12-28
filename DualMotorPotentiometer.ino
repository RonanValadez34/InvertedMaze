#include "DualMC33926MotorShield.h"

DualMC33926MotorShield md;
int sensorPin = A5; //pin potentiometer is connected to
int sensorValue = 0; //potentiometer value that will be read
int outputValue=0; //adjusted potentiometer value for dual motor controller

void stopIfFault() 
{
  if (md.getFault())
  {
    Serial.println("fault");
    while(1);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Dual MC33926 Motor Shield");
  md.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //read potentiometer value, returns 0-1023
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  //use map to adjust value from 0-400 for dual motor controller
  outputValue = map(sensorValue, 0, 1023, 0, 400);
  Serial.println(outputValue);
  //set M1 current to adjusted potentiometer value
  md.setM2Speed(outputValue);
  stopIfFault();
}
