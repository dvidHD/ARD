// se usa float por que se tienen decimales
float sensorqrd = A0; 
float valores;


void setup() 
{
  Serial.begin(9600);
  pinMode(sensorqrd, INPUT);
}

void loop() 
{
  // lee el sensor y convierte el valor en voltaje
  valores = analogRead(sensorqrd);
  Serial.println(valores);
  delay(100);
  // este cáclulo es muy rápido
}
