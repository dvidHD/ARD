
// one led in a 8x8 led matric simulates bouncing dot


#include <LedControl.h>
LedControl lc = LedControl (12,11,10,1); // DIN CLCK CS 

int row;
int row_prev;
int col;
int col_prev;
int ball_timer = 100;
long randNumber;
long updown=1;                                // directs movement: +1 is one row up up and -1 is one row down
long leftright=1;                             // directs movement: +1 is one col right and -1 is one col left


byte smiley[] =                               // fill array for opening smiley
{
   B00111110,
   B01000001,
   B10010101,
   B10100001,
   B10100001,
   B10010101,
   B01000001,
   B00111010
};


void setup() {

  Serial.begin (9600);   
  // put your setup code here, to run once:
  // the MAX72XX is in power-saving mode on startup,
  // we have to do a wakeup call
  lc.shutdown (0,false);
 
  // set the brightness to a medium values
  lc.setIntensity (0,0);                       // 0 = low; 8 = high

  // show smiley - to demonstrate that the 8x8 array works
  smile();
  delay(1000);
    
  // clear the display
  lc.clearDisplay (0);    

  // initial position
   randomSeed (analogRead(0));  
   col = random (1, 7);                       // picks col position between 1 and 7 
   row = random (1, 7);                       // picks row position between 1 and 7 

  // check whether display unit works 

  // display start col and row numbers on serial monitor
  Serial.println ("start condition" );
  Serial.print ("row: ");
  Serial.println (row);
  Serial.print ("col: ");
  Serial.println (col);
  Serial.println ("=======");
  Serial.println ();
}


void loop() {


  col_prev=col;                             // log position of ball
  row_prev=row;                             // log position of ball
  row=row+updown;
  col=col+leftright;

  checkVectors ();

  lc.setLed (0, col_prev, row_prev, false); // erase previous ball position
  lc.setLed (0, col, row, true);            // light up new ball position
  delay (ball_timer); 

  debug(); // run the debug module
 
}
// ============ SUBROUTINES ==============================================

void smile()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow (0,i,smiley[i]);
  }
}

void checkVectors () {

  if ((row>7) && (updown=1)){
     updown=-1;
    row=6;
  }


  if ((row<0) && (updown=-1)){
     updown=1;
    row=1;
  }


  if ((col>7) && (leftright=1)){
     leftright=-1;
    col=6;
  }


  if ((col<0) && (leftright=-1)){
     leftright=1;
    col=1;
  }
}

void debug(){

  Serial.print ("col: " );
  Serial.println (col);
  Serial.print ("row: " );
  Serial.println (row);
}
