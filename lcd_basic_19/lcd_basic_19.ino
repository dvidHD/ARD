#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 9, 6, 5, 4, 3);
 
void setup() {
   lcd.begin(16, 2);
}

void loop() {
  lcd.home();
  // IMPRIMIR ALGO EN LA PRIMERA LINEA
  lcd.print("DRONES");
  // MOVER EL CURSOR A LA SEGUNDA LINEA (1) PRIMERA COLUMNA (0)
  lcd.setCursor ( 0, 1 );
  // IMPRIMIR OTRA CADENA EN ESTA POSICION
  lcd.print("PINKY PIE");
  // ESPERAR UN SEGUNDO
  delay(1000);
}
