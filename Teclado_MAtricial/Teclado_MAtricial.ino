#include <Keypad.h>
int ledv=11;
int leda=12;
int ledr=13;
int ledx=10;

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
  pinMode(ledv,OUTPUT);
  pinMode(leda,OUTPUT);
  pinMode(ledr,OUTPUT);
}
  
void loop()
{	
  
  
  if (Serial.available() > 0) {
                
                orden = Serial.read();

              
                Serial.print("I received: ");
                Serial.println(orden);
        }
  
  
  char clic = Teclado1.getKey() ; 
	if (clic != 0)			
    	Serial.println(clic);
    
    if (clic=='1'){
      digitalWrite(ledv,HIGH);
      digitalWrite(leda,LOW);
      digitalWrite(ledr,LOW);
    }
       else if (clic=='5'){
      digitalWrite(ledv,LOW);
      digitalWrite(leda,HIGH);
      digitalWrite(ledr,LOW);
    }
       else if (clic=='9'){
      digitalWrite(ledv,LOW);
      digitalWrite(leda,LOW);
      digitalWrite(ledr,HIGH);
    }
 
 	 else if (clic=='D'){
      digitalWrite(ledv,LOW);
      digitalWrite(leda,LOW);
       digitalWrite(ledr,LOW);
      digitalWrite(ledx,HIGH);
       
    }
}
