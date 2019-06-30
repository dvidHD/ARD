void setup() {

  Serial.begin(9600);
  //activar el IPR (internal pull-up resistor)
  
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  //lee el valor del push
  int sensorVal = digitalRead(3);
  Serial.println(sensorVal);

  // Recuerda pull-up significa que la lógica es inversa. 
  // HIGH cuando está abierto, LOW cuando se presiona. 
  
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
    
  } else {
    digitalWrite(13, HIGH);
    Serial.print("hola");
  }
}
