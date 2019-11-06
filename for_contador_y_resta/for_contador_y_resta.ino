int x;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  for(x=1;x<101;x++){
   
    Serial.println(x);
  }
  delay (1000);
  
  for (x;x>0;x--){
    
    Serial.println(x); 
  }
  
  delay(1000);
}
