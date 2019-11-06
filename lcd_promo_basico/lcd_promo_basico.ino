#include <LiquidCrystal.h>

//Include LCD library   aqui inicio


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
    
    byte Heart[8] = {
    0b00000,
    0b01010,
    0b11111,
    0b11111,
    0b01110,
    0b00100,
    0b00000,
    0b00000
    };
    
    byte Bell[8] = {
    0b00100,
    0b01110,
    0b01110,
    0b01110,
    0b11111,
    0b00000,
    0b00100,
    0b00000
    };
    
    
    byte Alien[8] = {
    0b11111,
    0b10101,
    0b11111,
    0b11111,
    0b01110,
    0b01010,
    0b11011,
    0b00000
    };
    
    byte Check[8] = {
    0b00000,
    0b00001,
    0b00011,
    0b10110,
    0b11100,
    0b01000,
    0b00000,
    0b00000
    };
    
    byte Speaker[8] = {
    0b00001,
    0b00011,
    0b01111,
    0b01111,
    0b01111,
    0b00011,
    0b00001,
    0b00000
    };
    
    
    byte Sound[8] = {
    0b00001,
    0b00011,
    0b00101,
    0b01001,
    0b01001,
    0b01011,
    0b11011,
    0b11000
    };
    
    
    byte Skull[8] = {
    0b00000,
    0b01110,
    0b10101,
    0b11011,
    0b01110,
    0b01110,
    0b00000,
    0b00000
    };
    
    byte Lock[8] = {
    0b01110,
    0b10001,
    0b10001,
    0b11111,
    0b11011,
    0b11011,
    0b11111,
    0b00000
    };

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // create a new character
  lcd.createChar(0, Heart);
  // create a new character
  lcd.createChar(1, Bell);
  // create a new character
  lcd.createChar(2, Alien);
  // create a new character
  lcd.createChar(3, Check);
  // create a new character
  lcd.createChar(4, Speaker);
  // create a new character
  lcd.createChar(5, Sound);
  // create a new character
  lcd.createChar(6, Skull);
  // create a new character
  lcd.createChar(7, Lock);

  // Clears the LCD screen
  lcd.clear();
  
  // Print a message to the LCD.
  lcd.print("Loading......");
  delay(5000);
 }

void loop() {
   lcd.clear();
   delay(500);
   
  lcd.setCursor(0, 0);
  //Print a message to second line of LCD
  lcd.print("INSCRIBETE");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("A ROBOTICA");
  delay(1000);
  
  lcd.setCursor(0, 1);
  lcd.print("          ");
  delay(500);
  
  lcd.setCursor(0, 1);
  lcd.write(byte(0));

  delay(500);

  lcd.setCursor(2, 1);
  lcd.write(byte(1));

  delay(500);
    
  lcd.setCursor(4, 1);
  lcd.write(byte(2));

  delay(500);

  lcd.setCursor(6, 1);
  lcd.write(byte(3));

  delay(500);

  lcd.setCursor(8, 1);
  lcd.write(byte(4));

  delay(500);

  lcd.setCursor(10, 1);
  lcd.write(byte(5));

  delay(500);

  lcd.setCursor(12, 1);
  lcd.write(byte(6));

  delay(500);

  lcd.setCursor(14, 1);
  lcd.write(byte(7));

  delay(500);
  
}
