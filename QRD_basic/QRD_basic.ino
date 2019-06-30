int QRD = A2;
int valor;

void setup() {
  Serial.begin(9600);
  pinMode(QRD,INPUT);
}

void loop() {

  valor = analogRead(QRD);
  delay(1000);
  valor = valor*5/1023;
  Serial.println(valor);

  if(){
    Serial.println("hola"); 
  }
   
}
