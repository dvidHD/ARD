//Include LCD library   aqui inicio
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13,12,11,10,9,8);


void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Loading......");
 delay(1000);
 }

void loop() {
 
  lcd.setCursor(1, 1);
  //Print a message to second line of LCD
  lcd.print("Primera");
  delay(500);
  lcd.setCursor(1, 1);
  //Print a message to second line of LCD
  lcd.print("temperatura");
  delay(500);
}
