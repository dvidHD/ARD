#include <Servo.h>
//Definiendo Servomotor
Servo servo1; 

int servomotor;
//Asignando fotoresisenticas
int fsup = A0; // Fotoresistencia superior
int finf = A1; // Fotoresistencia inferior

 void setup () 
 {
  servo1.attach(9);
  servo1.write(0);
  delay(500);
 }

void loop()
{
  servomotor = servo1.read();
  //Entradas de valores de las fotoresistencias
  int sup = analogRead(fsup);
  int inf = analogRead(finf);

  if (sup < inf)
  {
    servo1.write(180);
    
    delay(1000);
  }
  else if (inf < sup)
  {
    servo1.write(0);
    delay(1000);
  }
  else 
  {
    servo1.write(90);
  }
  delay(1000);
}
