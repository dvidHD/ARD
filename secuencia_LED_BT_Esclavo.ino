byte dato=0;
int t=100;
int t2=300;

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);      //LED 1
  pinMode(12,OUTPUT);      //LED 2
  pinMode(11,OUTPUT);      //LED 3
  pinMode(10,OUTPUT);      //LED 4
  pinMode(9,OUTPUT);       //LED 5
  pinMode(8,OUTPUT);       //LED 6
  pinMode(7,OUTPUT);       //BUZZER
}
void loop()
{
  if( Serial.available())
  {
    dato = Serial.read();
  }
  if(dato == '1')
  {
    parpadeo_simple();
  }
  if(dato == '2')
  {
    bip();
  }
  if(dato == '3')
  {
    secuencia();
  }
  if(dato == '4')
  {
    auto_increible();
  } 
   if(dato == '5')
  {
    apagado();
  } 
}

void parpadeo_simple()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  delay(t);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  delay(t);
}

void bip()
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(t2);
  digitalWrite(7,LOW);
  delay(t);
}

void secuencia()
{
  
  digitalWrite(7,LOW);
  digitalWrite(13,HIGH);
  delay(t);
  digitalWrite(13,LOW);
  delay(t);
  digitalWrite(12,HIGH);
  delay(t);
  digitalWrite(12,LOW);
  delay(t);
  digitalWrite(11,HIGH);
  delay(t);
  digitalWrite(11,LOW);
  delay(t);
  digitalWrite(10,HIGH);
  delay(t);
  digitalWrite(10,LOW);
  delay(t);
  digitalWrite(9,HIGH);
  delay(t);
  digitalWrite(9,LOW);
  delay(t);
  digitalWrite(8,HIGH);
  delay(t);
  digitalWrite(8,LOW);
  delay(t);
}

void auto_increible()
{
  digitalWrite(7,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(t2);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  delay(t2);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  delay(t2);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  delay(t2);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  delay(t2);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  delay(t2);
}

void apagado()
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
} 
