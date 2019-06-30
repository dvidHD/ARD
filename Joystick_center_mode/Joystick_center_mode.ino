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
valX = analogRead(X)-512;
delay(30);
valY = analogRead(Y)-512;
delay(30);

if(valX>500){
  valX = 500;
}

if(valY>500){
  valY = 500;
}

Serial.print("el valor x es:");
Serial.println(valX);
Serial.print("el valor y es:");
Serial.println(valY); 



}
