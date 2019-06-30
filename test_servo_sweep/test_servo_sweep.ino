#include <Servo.h>    //Incluimos la biblioteca Servo.h a nuestro codigo
       
Servo izq; // Definimos un objeto tipo Servo, llamado "izq" que usaremos para poder controlar la rueda izquierda del robot
Servo der;
int x;

void setup() {
  // put your setup code here, to run once:
  izq.attach(3);  //vinculamos el puerto digital "3" al objeto "izq" que será donde estará conectado el motor izquierdo del robot
  der.attach(10); 
  x=0;
  Serial.begin(9600);
}

void loop() {
  for(x=0;x<181;x++){
    izq.write(x);
    der.write(x);
    delay(500);
    Serial.println(x);
  }

}
