 #include <Servo.h>

Servo derecha;  
Servo izquierda;
int trigPin = 10;
int echoPin = 11;

long duration;
int distance;

void setup() {
  derecha.attach(6);
  izquierda.attach(3);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
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

delay(150);

if (distance < 15){
    derecha.write(140);
    izquierda.write(90);
   delay(200);
   derecha.write(180);
    izquierda.write(0);
    delay(200);
    derecha.write(140);
    izquierda.write(90);
    delay(120);
  }
  if(distance > 30){
    derecha.write(0);
    izquierda.write(180);
    delay(400);
  }
  
    
}
