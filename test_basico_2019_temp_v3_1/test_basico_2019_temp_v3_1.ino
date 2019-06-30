#include <LiquidCrystal.h>


LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
Serial.begin(9600);  // put your setup code here, to run once:
lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  
}

void loop() {
  Serial.println("HOLA");
  delay(1500);
   lcd.print("hello, world!");
}
