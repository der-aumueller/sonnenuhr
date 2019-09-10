#include <Servo.h> //Einbinden der Servo Library 

Servo myservo; //Servo mit myservo ansprechen
int winkel = 90; //Startwinkel des Servos festlegen
  
void setup() {
myservo.attach(9); //Servo an Pin 9
}

void loop() {
  myservo.write(winkel); //Position ansteuern
}
