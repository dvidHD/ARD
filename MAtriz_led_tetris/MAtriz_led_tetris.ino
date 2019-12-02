
// one led in a 8x8 led matric simulates bouncing dot


#include <LedControl.h>
LedControl lc = LedControl (12,11,10,1); // DIN CLCK CS 


byte L[] =      // arreglo en columnas de bytes
{
   

  B00000000,
  B01100000,
  B01100000,
  B01100000,
  B01100000,
  B01111100,
  B01111100,
  B00000000

};

byte O[] =      // arreglo en columnas de bytes
{
   
B00000000,
  B01111110,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B01111110,
  B00000000

};




void setup() {

  Serial.begin (9600);   
 
  lc.shutdown (0,false);

  lc.setIntensity (0,0);                       // 0 = bajo; 8 = alto
  
  delay(1000);
    
  // limpia la matriz
  lc.clearDisplay (0);    

  

}


void loop() {

  for (int i = 0; i < 8; i++)  
  {
    lc.setRow (0,i,L[i]);
  }
  delay (300);
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow (0,i,O[i]);
  }
  delay(300);
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow (0,i,L[i]);
  }


}
