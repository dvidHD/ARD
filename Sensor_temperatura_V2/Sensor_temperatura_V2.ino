#include <SimpleDHT.h>
#include <LiquidCrystal.h>

int pinDHT11 = A4;  // se declara la entrada
SimpleDHT11 dht11(pinDHT11);  // declaración de la libreria a causa del modelo no debemos modificarlo

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);


void setup() {
  Serial.begin(9600);
  pinMode(pinDHT11, INPUT);  // declaración de entrada

  Serial.begin(9600);
  lcd.begin(16, 2);
 
}

void loop() {
  // Inician las lecturas
  Serial.println("===========CALCULANDO===========");
  Serial.println("===========PROCESANDO===========");
  Serial.println("Temperatura y Humedad Relativas...");
  
  // tomando muestras directas
  byte temperatura = 0;  //declaración de la variable
  byte humedad = 0;  // declaración de la variable
  int err = SimpleDHTErrSuccess;  // declaración de variable de error
  //  SimpleDHTErrSuccess   se genera en la libreria no debemos cambiarlo
  
  // condicional de lectura
  if ((err = dht11.read(&temperatura, &humedad, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Fallo de lectura, error..."); Serial.println(err);delay(1000);
    return;
  }
   // muestra de los datos
  Serial.print("Muestra correcta: ");
  Serial.print((int)temperatura); Serial.print(" *C, "); 
  Serial.print((int)humedad); Serial.println(" H");
  
  // tiempo ideal de muestreo
  delay(1500);

  //lista de condicionales para encendido de leds
  if (temperatura > 0 && temperatura < 5){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(200);
  }

  // segunda condición
  if (temperatura > 5 && temperatura < 10){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(200);
  }

  // tercera condición
  if (temperatura > 10 && temperatura < 15){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(200);
  }

   // cuarta condición
  if (temperatura > 15 && temperatura < 20){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(200);
  }

   // quinta condición
  if (temperatura > 20 && temperatura < 25){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    delay(200);
  }

   // sexta condición
  if (temperatura > 25 ){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    delay(200);
  }
  
}
