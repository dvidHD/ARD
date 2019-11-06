int direccionA = 12;
int pwmA =  3;
int direccionB = 13;
int pwmB =  11;

void setup() {
  pinMode(direccionA, OUTPUT);
  pinMode(pwmA, OUTPUT);
  
  pinMode(direccionB, OUTPUT);
  pinMode(pwmB, OUTPUT);
}

void loop() {
  //digitalWrite(direccionA,HIGH);
  digitalWrite(direccionB,LOW);
  analogWrite(pwmB,30);
 // analogWrite(pwmA,30);
  
  
}
