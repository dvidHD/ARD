int x;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  for(x=1;x<101;x=x+3){
  
      Serial.println(x);
  }
  delay (1000);
}
