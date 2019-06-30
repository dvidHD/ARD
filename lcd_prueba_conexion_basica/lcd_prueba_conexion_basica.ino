
#include <LiquidCrystal.h>


LiquidCrystal lcd(11, 9, 6, 5, 4, 3);
 
void setup() {
  Serial.begin(9600);
  
  Serial.println("FUNCIONANDO");

 lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
 
}

void loop() {
  
  
 
  
}
