int trigPin = A1;
int echoPin = A0;
int BUZZER = A2;
int LEDRED1 = 8;
int LEDRED2 = 7;
int LEDBLUE3 = 9;
int LEDWIN = 10;
int LEDBLUE5 = 11;
int LEDRED6 = 12;
int LEDRED7 = 13;

void setup() {
pinMode(echoPin, INPUT);
pinMode(trigPin, OUTPUT);

pinMode(BUZZER, OUTPUT);
        //  Definimos los leds que tendremos conectados
pinMode(LEDRED1, OUTPUT);
pinMode(LEDRED2, OUTPUT);
pinMode(LEDBLUE3, OUTPUT);
pinMode(LEDWIN, OUTPUT);   //  el led que se encuentra enmedio
pinMode(LEDBLUE5, OUTPUT);
pinMode(LEDRED6, OUTPUT);
pinMode(LEDRED7, OUTPUT);
Serial.begin(9600);

tone(BUZZER, 200);  //  usamos la función tone para definir un volumen de buzzer adecuado

/*
 * La secuencia siguiente es para denotar el inicio del juego
 * similar a lo que hacían los juegos de los 90's como los de las
 * maquinitas
 */
    digitalWrite(LEDRED1, HIGH);
    digitalWrite(LEDRED7, HIGH);
    delay(300);
    
    noTone(BUZZER);
    digitalWrite(LEDRED1, LOW);
    digitalWrite(LEDRED7, LOW);
    delay(300);
    
    tone(BUZZER, 300);
    digitalWrite(LEDRED2, HIGH);
    digitalWrite(LEDRED6, HIGH);
    delay(300);
    
    noTone(BUZZER);
    digitalWrite(LEDRED2, LOW);
    digitalWrite(LEDRED6, LOW);
    delay(300);
    
    tone(BUZZER, 400);
    digitalWrite(LEDBLUE3, HIGH);
    digitalWrite(LEDBLUE5, HIGH);
    delay(300);
    
    noTone(BUZZER);
    digitalWrite(LEDBLUE3, LOW);
    digitalWrite(LEDBLUE5, LOW);
    delay(300);
    
    tone(BUZZER, 500);
    digitalWrite(LEDWIN, HIGH);
    delay(300);
    
    noTone(BUZZER);
    digitalWrite(LEDWIN, LOW);
    delay(300);


}

void loop() {
  // deifinimos variables locales de duración y distancia
  long duration;
  long distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  //Hacemos el cálculo de distancia con el sensor ultrasónico
   
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  //Serial.println(distance);
    
    if (distance > 30) {

  digitalWrite(LEDRED1, HIGH);
  digitalWrite(LEDRED2, LOW);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, LOW);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, LOW);
  digitalWrite(LEDRED7, HIGH);
    
  delay(300);

  //definimos nuevamente variables locales dentro del if
  
  long duration;
  long distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
    
    if (distance > 30) {

  digitalWrite(LEDRED1, LOW);
  digitalWrite(LEDRED2, HIGH);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, LOW);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, HIGH);
  digitalWrite(LEDRED7, LOW);
    
  delay(300);

  // definimos variables locales nuevamente
  
   long duration;
   long distance;
   
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
    
    if (distance > 30) {

  digitalWrite(LEDRED1, LOW);
  digitalWrite(LEDRED2, LOW);
  digitalWrite(LEDBLUE3, HIGH);
  digitalWrite(LEDWIN, LOW);
  digitalWrite(LEDBLUE5, HIGH);
  digitalWrite(LEDRED6, LOW);
  digitalWrite(LEDRED7, LOW);
    
  delay(300);

    // definimos variables locales dentro del if
    
     long duration;
     long distance;
     
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
    
    if (distance > 30) {

  digitalWrite(LEDRED1, LOW);
  digitalWrite(LEDRED2, LOW);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, HIGH);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, LOW);
  digitalWrite(LEDRED7, LOW);
    
  delay(300);
  }
  
  else {
  digitalWrite(LEDRED1, HIGH);
  digitalWrite(LEDRED2, HIGH);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, LOW);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, HIGH);
  digitalWrite(LEDRED7, HIGH);
  tone(BUZZER, 300);
  delay(300);
  noTone(BUZZER);
  tone(BUZZER, 200);
  delay(200);
  noTone(BUZZER);
  delay(5000);
  }
    }
    
  else {
  digitalWrite(LEDRED1, HIGH);
  digitalWrite(LEDRED2, HIGH);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, LOW);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, HIGH);
  digitalWrite(LEDRED7, HIGH);
  tone(BUZZER, 300);
  delay(300);
  noTone(BUZZER);
  tone(BUZZER, 200);
  delay(200);
  noTone(BUZZER);
  delay(5000);
  }
    }
    
    else {
  digitalWrite(LEDRED1, HIGH);
  digitalWrite(LEDRED2, HIGH);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, LOW);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, HIGH);
  digitalWrite(LEDRED7, HIGH);
  
  delay(5000);
}   
}   

else {
  digitalWrite(LEDRED1, HIGH);
  digitalWrite(LEDRED2, HIGH);
  digitalWrite(LEDBLUE3, HIGH);
  digitalWrite(LEDWIN, HIGH);
  digitalWrite(LEDBLUE5, HIGH);
  digitalWrite(LEDRED6, HIGH);
  digitalWrite(LEDRED7, HIGH);
  tone(BUZZER, 600);
  delay(200);
  noTone(BUZZER);
  delay(200);
  digitalWrite(LEDRED1, LOW);
  digitalWrite(LEDRED2, LOW);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, HIGH);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, LOW);
  digitalWrite(LEDRED7, LOW);
  tone(BUZZER, 600);
  
  delay(200);
  noTone(BUZZER);
  delay(200);
  
  digitalWrite(LEDRED1, HIGH);
  digitalWrite(LEDRED2, HIGH);
  digitalWrite(LEDBLUE3, HIGH);
  digitalWrite(LEDWIN, HIGH);
  digitalWrite(LEDBLUE5, HIGH);
  digitalWrite(LEDRED6, HIGH);
  digitalWrite(LEDRED7, HIGH);
  tone(BUZZER, 600);
  
  delay(200);
  noTone(BUZZER);
  delay(200);
  
  digitalWrite(LEDRED1, LOW);
  digitalWrite(LEDRED2, LOW);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDWIN, HIGH);
  digitalWrite(LEDBLUE5, LOW);
  digitalWrite(LEDRED6, LOW);
  digitalWrite(LEDRED7, LOW);
  tone(BUZZER, 600);
  delay(200);
  noTone(BUZZER);
  delay(200);
  delay(3000);
  tone(BUZZER, 200);
  digitalWrite(LEDRED1, HIGH);
  digitalWrite(LEDRED7, HIGH);
  delay(300);
  noTone(BUZZER);
  digitalWrite(LEDRED1, LOW);
  digitalWrite(LEDRED7, LOW);
  delay(300);
  
  tone(BUZZER, 300);
  digitalWrite(LEDRED2, HIGH);
  digitalWrite(LEDRED6, HIGH);
  delay(300);
  noTone(BUZZER);
  digitalWrite(LEDRED2, LOW);
  digitalWrite(LEDRED6, LOW);
  delay(300);
  
  tone(BUZZER, 400);
  digitalWrite(LEDBLUE3, HIGH);
  digitalWrite(LEDBLUE5, HIGH);
  delay(300);
  noTone(BUZZER);
  digitalWrite(LEDBLUE3, LOW);
  digitalWrite(LEDBLUE5, LOW);
  delay(300);
  
  tone(BUZZER, 500);
  digitalWrite(LEDWIN, HIGH);
  delay(300);
  noTone(BUZZER);
  digitalWrite(LEDWIN, LOW);
  delay(300);
  }
  
 }
