const int boton = 9;
int respuesta;
void setup() {
  Serial.begin(9600);      //Inicializamos el monitor serial
}

void loop(){

   if (boton == HIGH){
    Serial.write ( '1');
   } else {
    Serial.write('0');
   }
                                           
}
