int x;
int y;
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  for(x=1;x<10;x++){
   
    for(y=1;y<=x;y++){ 
        // imprimo la cantidad de letras que corresponden
       Serial.print("D"); 
    }
    // uso un espacio para brincar de renglón
    Serial.println(" ");
  }


  // ahora pasamos a hacer la decrementación o resta
  
  delay(1000);  // esperamos 1seg antes de hacer la resta

  //inicialmente marcamos una de nuestras variables como 10
  for(x=10;x>0;x--){


   //nuestra segunda variable inicia en 1 nuevamente ya que tenemos que igualarla
   //a la cantidad de letras que tenemos que poner para ir decrementando
    for(y=1;y<=x;y++){ 
        // imprimo la cantidad de letras que corresponden
       Serial.print("D"); 
    }
    // uso un espacio para brincar de renglón
    Serial.println(" ");
  }
}
  
