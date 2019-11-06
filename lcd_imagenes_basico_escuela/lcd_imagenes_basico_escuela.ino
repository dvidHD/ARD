//Include LCD library   aqui inicio
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

// generamos cada imagen en el formato siguiente cada una debe tener nombre diferente

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

    
    void setup() {
  // iniciamos la pantalla LCD
  lcd.begin(16, 2);

  // asignamos un identificador a cada imágen, en este caso la imagen 1 será sonido
  // y la imagen 2 será la calavera, podemos asignar las imagenes que sean necesarias
  
  lcd.createChar(1, Sound);
  lcd.createChar(2, Skull);
 

  // limpia la pantalla LCD
  lcd.clear();
  
  // Muestra un mensaje antes de iniciar el programa
  lcd.print("Loading......");
  delay(5000);
 }

 void loop() {
   
  // acomodamos el cursor donde lo deseemos 
  lcd.setCursor(0, 0);
  //Escribimos un mensaje desde la posición del cursor
  lcd.print("Imagenes -->");
  delay(500);

  // movemos el cursor a la columna 2 fila 2 (recuerden que se empieza a contar desde el cero)
  // ejemplo:  lcd.setCursor(COLUMNA,FILA)
  lcd.setCursor(2, 1);
  lcd.write(byte(1));

  delay(1000);
    
  lcd.setCursor(4, 1);
  lcd.write(byte(2));

  delay(1000);
  
  
}

