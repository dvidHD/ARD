#include <Servo.h>

Servo derecha;
Servo izquierda;

int trigPin = 9;
int echoPin = 10;
// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);

derecha.attach(11);
izquierda.attach(12);

Serial.begin(9600);
}

void loop() {
  
  distancia();
}

void distancia(){

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
}

void avanza(){
  dereccha.write(180);
  izquierda.write(0);
  delay(500);
}


