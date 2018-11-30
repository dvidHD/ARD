 
int blue = 12;                // choose the pin for the LED
int red = 10;
int green = 11;
int green2 =5;
int red2 = 4;
int inputPin = 7;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status
int x = HIGH;
int pirReading;
//int pulseSpeed = 100 ; 

void setup() {
  pinMode(blue, OUTPUT);      // declare LED as output
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  Serial.begin(9600);
}
 
void loop(){

  val = digitalRead(inputPin); 
                     // read input value
                     
        if (val == HIGH) {  
          if (x == HIGH) {                    // check if the input is HIGH
          digitalWrite(blue, HIGH); 
          digitalWrite(red, HIGH);
          digitalWrite(green, HIGH);
          digitalWrite(green2, HIGH);
          digitalWrite (red2, HIGH);
          Serial.println("Motion 2");
          }
          else{
           digitalWrite(blue, LOW);
           digitalWrite(red, LOW);
           digitalWrite(green, LOW);
           digitalWrite(green2, LOW);
           digitalWrite(red2, LOW);
           Serial.println("Motion 1");  
          }
          if (pirState == LOW) {
           // we have just turned on
            Serial.println("Motion detected!");
            // We only want to print on the output change, not state
            pirState = HIGH;
            } 
          
  
        }   
    
    else {
    
    if (pirState == HIGH){
      if (x==HIGH){
        x=LOW;
      }
      else {
        x=HIGH;
      }
      // we have just turned of
      Serial.println("Motion ended!");
      // We only want to print on the output change, not state
      pirState = LOW;
      
    }
    //delay(pulseSpeed);
  }
}