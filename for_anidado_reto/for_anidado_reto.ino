int x;
int y;
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  for(x=1;x<20;x++){
   delay(500);
    for(y=1;y<=x;y++){ 
        delay(500);// imprimo la cantidad de letras que corresponden
       Serial.print("D"); 
    }
    // uso un espacio para brincar de renglón
    Serial.println(" ");
  }
}
