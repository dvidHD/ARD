int contador;
int cuenta;
void setup() {
  Serial.begin(9600);

}

void loop() {
 for(cuenta=0;cuenta<2;cuenta){
      for(contador=0;contador<16;contador++){
          Serial.println(contador);
          delay(1000);
         }
 }   
}
