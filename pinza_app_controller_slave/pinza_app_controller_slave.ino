#include <Servo.h>    //Incluimos la biblioteca Servo.h a nuestro codigo
       
Servo base; 
Servo bleft;
Servo bright;
Servo pinza; 
int dato=0;  //Variable que albergara el dato que nos envíe el programa "Maestro" pormedio del bluetooth

int datobase;
int datobleft;
int datobright;
int datopinza;

void setup() {
  
  base.attach(20);  
  bleft.attach(22);
  bright.attach(24);
  pinza.attach(26); 
  
  Serial.begin(9600);   
  pinMode(20,OUTPUT);     
  pinMode(22,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(28,OUTPUT);
}

void loop(){

  if( Serial.available())   //Preguntamos si la recepcion de datos por el monitor serial esta disponible
  {
    dato = Serial.read();    //Se lee el valor recibido en el monitor serial y se le asigna el mismo a la variable "dato"
    Serial.println(dato);
  }
                
}




