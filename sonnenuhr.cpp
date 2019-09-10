#include <Servo.h> //Einbinden der Servo Library 

Servo myservo; //Servo mit myservo ansprechen
int winkel = 0; //Startwinkel des Servos festlegen
  
void setup() {
myservo.attach(9); //Servo an Pin 9
}

void loop() {
int rightLDR = analogRead(0);
int leftLDR = analogRead(1);
int diff = (rightLDR - leftLDR); //Differenz ausrechnen
if (diff > 20) { //Wenn rechts heller als links, um 2 Grad korrigieren
winkel = winkel+2;
}
if (diff < -20) { //Wenn links heller als rechts, um 2 Grad korrigieren
winkel = winkel-2;
}
if (winkel > 179) { //maximaler Winkel = 179 Grad
winkel = 179;
}
if (winkel < 0) { //minimaler Winkel = 0 Grad
winkel = 0;
}
 myservo.write(winkel); //Winkel an Servo schicken
 delay(20);
}
