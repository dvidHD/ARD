float X = A0;
float Y = A1;
float valX;
float valY;

void setup() {
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  Serial.begin(9600);
}


void loop() {

valX = analogRead(X);
delay(30);
valY = analogRead(Y);
delay(30);
Serial.println(valX);
Serial.println(valY);

  
}
