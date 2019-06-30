#include <Keypad.h>  
int t=100;

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

void setup(){
 Serial.begin(9600); 
  
}
 
void loop(){
 char key = Teclado1.getKey();
 
 if (key != NO_KEY){
  
   Serial.write(key); 
 }
 if (key == '1')
 { 
   Serial.write('1'); //  (Se envia un "1" mediante la transmicion serial por el modulo bluetooth "Maestro" al modulo "Esclavo")
        delay(t);
 }
else if (key == '2')
 { 
   Serial.write('2'); 
        delay(t);
 } 
  else if (key == '3')
 { 
   Serial.write('3'); 
        delay(t);
 } 
   else if (key == '4')
 { 
   Serial.write('4'); 
        delay(t);
 } 
   else if (key == '5')
 {
   Serial.write('5'); 
      delay(t);
 } 
   
 }
