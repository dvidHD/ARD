

//Include LCD library   aqui inicio
#include <LiquidCrystal.h>

//genero las variables que usare
char  G,H,I,J,K,L;

// iniciamos la libreria con sus pines correspondientes a nuestra conexión
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

// Definiremos el pulgar y el puño linea por linea y cuadrante por cuadrante

 byte parteA[8] = {B00100,
                   B00011,
                   B00100,
                   B00011,
                   B00100,
                   B00011,
                   B00010,
                   B00001};

 byte parteB[8] = {B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00011};

 byte parteC[8] = {B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00001,
                   B11110};

 byte parteD[8] = {B00000,
                   B01100,
                   B10010,
                   B10010,
                   B10001,
                   B01000,
                   B11110,
                   B00000};

 byte parteE[8] = {B00010,
                   B00010,
                   B00010,
                   B00010,
                   B00010,
                   B01110,
                   B10000,
                   B00000};

 byte parteF[8] = {B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B10000,
                   B01000,
                   B00110};
  


void setup() {
  //Realizamos la generación de cada una de las partes de nuestro pulgar
  
  lcd.createChar(G, parteA);
  lcd.createChar(H, parteB);
  lcd.createChar(I, parteC);
  lcd.createChar(J, parteD);
  lcd.createChar(K, parteE);
  lcd.createChar(L, parteF);
  
  lcd.begin(16,2);
  
  lcd.clear();
}


void loop() {

  // cuadrante por cuadrante sin interrupciones mostraremos cada parte de nuestro pulgar
  // sólo nos detendremos al final para realizar una limpieza de la pantalla de forma general
  //esto para evitar que se tenga una saturación de los cuadrantes
  
  lcd.setCursor(4,0);
  lcd.write(G);
  lcd.setCursor(4,1);
  lcd.write(H);
  lcd.setCursor(5,0);
  lcd.write(I);
  lcd.setCursor(5,1);
  lcd.write(J);
  lcd.setCursor(6,0);
  lcd.write(K);
  lcd.setCursor(6,1);
  lcd.write(L);

    delay(50);
    lcd.clear();

   //AHORA MOVEREMOS EL PULGAR 1 CUADRANTE A LA DERECHA

  lcd.setCursor(5,0);
  lcd.write(G);
  lcd.setCursor(5,1);
  lcd.write(H);
  lcd.setCursor(6,0);
  lcd.write(I);
  lcd.setCursor(6,1);
  lcd.write(J);
  lcd.setCursor(7,0);
  lcd.write(K);
  lcd.setCursor(7,1);
  lcd.write(L);

  delay(50);
    lcd.clear();

   //AHORA MOVEREMOS EL PULGAR 1 CUADRANTE A LA DERECHA

  lcd.setCursor(6,0);
  lcd.write(G);
  lcd.setCursor(6,1);
  lcd.write(H);
  lcd.setCursor(7,0);
  lcd.write(I);
  lcd.setCursor(7,1);
  lcd.write(J);
  lcd.setCursor(8,0);
  lcd.write(K);
  lcd.setCursor(8,1);
  lcd.write(L);

  //Repetiremos esto varias veces hasta tener un movimiento fluido
  //podemos hacerlo de izquierda a derecha y al llegar al borde de derecha a izquierda
    delay(50);
    lcd.clear();
}     
