 #include <SimpleDHT.h>
#include <LiquidCrystal.h>

int pinDHT11 = A4;  // se declara la entrada
SimpleDHT11 dht11(pinDHT11);  // declaración de la libreria a causa del modelo no debemos modificarlo

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
 
void setup() {
  Serial.begin(9600);
  pinMode(pinDHT11, INPUT);  // declaración de entrada


  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Loading......");
  delay(5000);
 
}

void loop() {
  // Inician las lecturas
  lcd.clear();
  lcd.print("===CALCULANDO===");
  delay(1000);
  lcd.clear();
  lcd.print("===PROCESANDO===");
  delay(1000); 
  lcd.clear();
  lcd.print("Temperatura.....");
  
  byte temperatura = 0;  //declaración de la variable
  byte humedad = 0;  // declaración de la variable 
  
  int err = SimpleDHTErrSuccess;  // declaración de variable de error
   
    if ((err = dht11.read(&temperatura, &humedad, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;
  }
  
  delay(1500);

  lcd.clear();
  lcd.print("Temperatura.....");
  delay(1300);
  lcd.clear();
  lcd.print(temperatura);
  delay(2000);
  
  lcd.clear();
  lcd.print("Humedad........");
  delay(1500);
  lcd.clear();
  lcd.print(humedad);
  delay(2500);
  
}
