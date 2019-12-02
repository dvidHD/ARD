
// one led in a 8x8 led matric simulates bouncing dot


#include <LedControl.h>
LedControl lc = LedControl (12,11,10,1); // DIN CLCK CS 


byte smiley[] =      // arreglo en columnas de bytes
{
   B00111110,
   B01000001,
   B10010101,
   B10100001,
   B10100001,
   B10010101,
   B01000001,
   B00111010
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
    lc.setRow (0,i,smiley[i]);
  }


}
