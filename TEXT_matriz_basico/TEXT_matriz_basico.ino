
#include "LedControl.h"

/*

 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to CS

 */
LedControl lc=LedControl(12,11,10,1);

//espera entre actualizaciones de display
unsigned long delaytime=600;

void setup() {
  
  lc.shutdown(0,false);
  
  lc.setIntensity(0,8);

  lc.clearDisplay(0);
}


void writeArduinoOnMatrix() {
  

  // ESCRIBE ARDUINO  CREO
  byte R[8]={B11111100,B10000100,B10000100,B11111000,B10100000,B10010000,B10001000,B10000100};
  byte O[8]={B00011000,B00100100,B01000010,B01000010,B01000010,B01000010,B00100100,B00011000};  
  byte B[8]={B11111100,B10000100,B10000100,B11111000,B10001000,B10000100,B10000100,B11111100};
  byte J[8]={B00011110,B00000100,B00000100,B00000100,B10000100,B10000100,B01000100,B00111000};
  byte A[8]={B00111000,B01000100,B10000010,B11111110,B10000010,B10000010,B10000010,B10000010};     
  byte X[8]={ B10000001,B01000010,B00100100,B00011000,B00011000,B00100100,B01000010,B10000001};
  byte love[8]={ B00000000,B01100110,B10011001,B10011001,B10000001,B01000010,B00100100,B00011000};  


  /* Letra   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,R[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// fin de una letra///////

  /* letra  */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,O[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// fin de letra ///////


  /* Letra  */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,B[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// fin de letra///////

  /* Letra  */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,O[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// fin de letra J///////

  /* Lletra   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,J[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// fin de letra///////

  /* L  */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,A[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END ///////

  /* L */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,X[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END///////



  /* L */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,love[i]);

  }
   
  delay(delaytime);
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END///////

}// writeArduinoOnMatrix()  end


void loop() { 
  writeArduinoOnMatrix();

}
