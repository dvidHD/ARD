float sig = A0;

void setup() {
pinMode(sig,INPUT);
Serial.begin(9600);
}

void loop() {

Serial.println(analogRead(sig));
delay(200);
  
}
