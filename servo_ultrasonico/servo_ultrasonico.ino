 #include <Servo.h>

Servo derecha;  
Servo izquierda;
int trigPin = 1;
int echoPin = 2;

long duration;
int distance;

void setup() {
  derecha.attach(8);
  izquierda.attach(7);
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

if (distance < 80){
    derecha.write(90);
    izquierda.write(90);
  }
  else{
    derecha.write(180);
    izquierda.write(0);
  }
  
}
