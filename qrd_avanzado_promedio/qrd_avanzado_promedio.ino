// se usa float por que se tienen decimales
float sensorqrd = A0; 
float valores;
float suma;
float promedio;
float valor_final;

void setup() 
{
  Serial.begin(9600);
  pinMode(sensorqrd, INPUT);
  
}

void loop() 
{
  suma=0;  //siempre tenemos que iniciar nuestra suma en cero
  // lee el sensor 5 veces
  for (int x=0;x<6;x++){
  valores = analogRead(sensorqrd);
  suma = valores + suma;   //  cada ciclo tendremos la suma correcta
  }
  // podemos hacer un print para cada fase del ciclo y agregar delays para verlo todo mas lento
  promedio = suma / 5;
  
  valor_final = promedio * 5.0 / 1023.0;
  Serial.println(valor_final);
  delay(100);
  // este cáclulo es muy rápido
}
