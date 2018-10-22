#include "DHT.h"

#define DHTPIN 2   // en que pin se conecta el sensor

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE); // se inicia el manejo del sensor por parte de la libreria

int led1, led2, led3, led4, led5, led6;

void setup() {
  Serial.begin(9600);
  Serial.println("Medición de valores inciada");

  dht.begin();
  // se marcan los leds como salida
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}
void loop() {
  // esperar entre mediciones
  delay(2000);

  // al ser un sesnro lento toma hasta 2 segundos hacer mediciones
  float h = dht.readHumidity();
  // lee la temperatura como celcius por default
  float t = dht.readTemperature();
  // si se pone true la lee como farenheit
  float f = dht.readTemperature(true);

  // revisa si alguna medida falló al calcularse
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Fallo de medición del sensor intentando nuevamente...");
    return;
  }

  // calcula inidice de calor
  float hif = dht.computeHeatIndex(f, h);
  // calcula indice de calor en celcius si se agrega el false
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Indice de calor: ");
  Serial.print(hic);
  Serial.print(" *C ");
  Serial.print(hif);
  Serial.println(" *F");

  // ahora se arman las condiciones usando la variable t como referencia
  // ya que es la temperatura en centigrados

//solo se enciende un led si la temperatura es entre 0 y 5 grados
  if (t > 0 && t < 5){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(200);
  }

  // segunda condición
  if (t > 5 && t < 10){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(200);
  }

  
}
