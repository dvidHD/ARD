#include <Servo.h>

Servo derecha; 
Servo izquierda;

void setup() {
Serial.begin(9600);
derecha.attach(3);
izquierda.attach(6);

}

void loop() {
// el robot se frena....
derecha.attach(90);
izquierda.attach(90)

}
