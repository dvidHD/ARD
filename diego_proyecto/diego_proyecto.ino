
#include <Servo.h>
Servo esta;
// defines pins numbers
const int trigPin = 1;
const int echoPin = A1;

// defines variables
long duration;
int distance;

int rojo = 2;
int azul = 3;
int verde = 4;
int A = 13;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(rojo,OUTPUT);
pinMode(azul,OUTPUT);
pinMode(verde,OUTPUT);
esta.attach(6);
Serial.begin(9600); // Starts the serial communication
digitalWrite(13, HIGH);
}

void loop() {
  esta.write(110);
delay(1000);
esta.write(0);
delay(1000);
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);


if (distance > 25 ){
  esta.write(110);
delay(1000);
esta.write(0);
delay(1000);
  digitalWrite(rojo,HIGH);
  delay(20000);
  digitalWrite(verde,HIGH);
  delay(20000);
  digitalWrite(azul,HIGH);
  delay(20000);
}

if (distance < 20 ){
  esta.write(110);
delay(1000);
esta.write(0);
delay(1000);
 digitalWrite(rojo,HIGH);
  delay(2000);
  digitalWrite(azul,HIGH);
  delay(2000);
  digitalWrite(azul,HIGH);
  delay(2000);
  digitalWrite(rojo,HIGH);
  delay(2000);
  digitalWrite(verde,HIGH);
  delay(2000);
  digitalWrite(verde,HIGH);
  delay(2000);
}
esta.write(110);
delay(1000);
esta.write(0);
delay(1000);
}
