int x;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(9,255);
  digitalWrite(6,255);

 while (x=0,x<256,x++){
  digitalWrite(5,x);
  delay(600);
  
}

}
