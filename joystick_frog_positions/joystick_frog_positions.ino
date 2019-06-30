#include <Servo.h>

Servo derecha;
Servo izquierda;  
float backfront = A0;
float leftright =A1;
float varback;
float varleft;


void setup() {
  derecha.attach(9);
  izquierda.attach(8);
  Serial.begin(9600);
}

void loop() {
//aqui empieza
 varback = analogRead (backfront);  //guardando datos
 delay(30);
 Serial.println(varback);
 delay(30);

  if(varback >= 220 && varback <= 380){
    Alto(); 
  }

  if(varback > 400){
    Avanza();
  }
  
      
}

void Alto(){
  derecha.write(90);
  izquierda.write(90);
}

void Avanza(){
  derecha.write(180);
  izquierda.write(0);
}

