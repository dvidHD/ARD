int var1;
int var2;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
  var1 = analogRead(A0);
  var2 = analogRead(A2);
  Serial.println(var1);
  Serial.println(var2);
  delay(300);
  
  if (var1 != var2){
   digitalWrite(3,HIGH); 
  }
  
  if (var1 > 300 && var2 < 500){
  digitalWrite (5,HIGH);
  }
  
  if (var1 < 30 || var2 >50){
  digitalWrite (9,HIGH);
  }
  
  else {
    digitalWrite (9,LOW);
    digitalWrite (5,LOW);
    digitalWrite (3,LOW);
  }
  
  
}
