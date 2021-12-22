#include <Stepper.h>

int stepsPerRevolution;
int Speed;
void setup() 
{
 Serial.begin(9600);
}
void loop() {
 
  Serial.println("Enter steps");
  while(Serial.available()==0)
  {
    }
  int stepsPerRevolution=Serial.parseInt();
  Stepper myStepper(stepsPerRevolution, 3, 4, 5, 6);
//  //myStepper.setSpeed(60); 
  Serial.println("enter speed");
  while(Serial.available()==1)
  {}
 int Speed=Serial.parseInt();
  Serial.println(Speed);
  Serial.println(stepsPerRevolution);
  Serial.println("debug 1");
  Serial.println("debug 2 ");
  myStepper.setSpeed(Speed);
  myStepper.step(stepsPerRevolution);
  Serial.println("clockwise");
  
 
} 
  
 /* Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);*/
