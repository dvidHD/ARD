int ledPin = 13;
int ldrPin = A0;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT); // el led es salida
pinMode(ldrPin, INPUT);  // la FR  es entrada
}

void loop() {
int ldrStatus = analogRead(ldrPin);  //  creamos una variable local y asignamos su valor

// iniciamos la comparacion
if (ldrStatus <=300) {
digitalWrite(ledPin, HIGH);
Serial.println("LA FR no detecta luz, el led esta encendido");
}

else {
digitalWrite(ledPin, LOW);
Serial.println("---------------");
}

}
