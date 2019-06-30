#include <Keypad.h>

const byte Filas = 4;     
const byte Cols = 4;    

byte Pins_Filas[] = {9, 8, 7, 6}; 
byte Pins_Cols[] = { 5, 4, 3, 2};


char Teclas [ Filas ][ Cols ] = 
{ 
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

int orden;

void setup(){   
  Serial.begin(9600) ; 
 
}

void loop(){
  
if (Serial.available() > 0) {
                
                orden = Serial.read();

              
                Serial.print("I received: ");
                Serial.println(orden);
        }
  
  
  char clic = Teclado1.getKey() ; 
  if (clic != 0)  {    
      Serial.println(clic);
  }

  if(clic == '5'){
    Serial.println("hola");
  }

  if(clic == 'D'){
    Serial.println("abriendo puerta");
    Serial.println("espere.....");
    delay(5000);
    Serial.println("puerta abierta!!");
  }
}
