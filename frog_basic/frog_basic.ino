
#include <Servo.h>

Servo myservo;
Servo derecha

void setup() {
  myservo.attach(9);
  derecha.attach(10);
}

void loop() {
  myservo.write(180);
  derecha.write(180);
}

