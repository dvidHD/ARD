int rojo = 7;
int azul = 8;
int verde = 9;

void setup() {
  pinMode(rojo,OUTPUT);
  pinMode(azul,OUTPUT);
  pinMode(verde,OUTPUT);
}

void loop() {
  MIX();

}

void RED(){
  digitalWrite(rojo,HIGH);
  delay(400);
  digitalWrite(rojo,LOW);
  delay(400);
  digitalWrite(rojo,HIGH);
}

void GREEN(){
  digitalWrite(verde,HIGH);
  delay(400);
  digitalWrite(verde,LOW);
  delay(400);
  digitalWrite(verde,HIGH);
}

void BLUE(){
  digitalWrite(azul,HIGH);
  delay(400);
  digitalWrite(azul,LOW);
  delay(400);
  digitalWrite(azul,HIGH);
}

void MIX(){
  digitalWrite(azul,HIGH);
  digitalWrite(rojo,HIGH);
  delay(400);
  digitalWrite(azul,LOW);
  digitalWrite(rojo,LOW);
  delay(400);
  digitalWrite(azul,HIGH);
  digitalWrite(rojo,HIGH);
}

