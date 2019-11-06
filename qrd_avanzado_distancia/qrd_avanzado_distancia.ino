// se usa float por que se tienen decimales
float sensorqrd = A0; 
float valores;
float distancia;

void setup() 
{
  Serial.begin(9600);
  pinMode(sensorqrd, INPUT);
}

void loop() 
{
  // lee el sensor y convierte el valor en voltaje
  valores = analogRead(sensorqrd);
  // se hace un calculo para conocer la distancia con base en el reflejo
  distancia = valores * 5.0 / 1023.0;
  Serial.println(distancia);
  delay(100);
  // este cáclulo es muy rápido
}
