void setup()
{
  Serial.begin(9600);
 
  pinMode(2, INPUT_PULLUP);
  pinMode(12, OUTPUT);
}

void loop()
{
  int sensorVal = digitalRead(2);
  
  Serial.println(sensorVal);
  
  if (sensorVal == HIGH) {
    digitalWrite(12, LOW);
  } else {
    digitalWrite(12, HIGH);
  }
}
