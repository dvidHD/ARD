

int trigPin = 9;
int echoPin = 10;

long duration;
int distance;

int led = 3;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {

distancia();
//aqui me va a decir a que distancia esta mi obstaculo del sensor

if(distance < 20){
  digitalWrite(led,HIGH);
} else{
  digitalWrite(led,LOW);
}
  
}

void encender(){
  digitalWrite(led,HIGH);
  
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



