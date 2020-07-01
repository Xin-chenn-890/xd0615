#include <MsTimer2.h>

int pinInterrupt = 2;
int tick = 0; 
int IN[4]={3,4,5,6};

void mycode()
{
  if ( digitalRead(pinInterrupt) == HIGH )
      tick = 0;
}

void myTimer()
{
  if( ++tick > 9 )
    tick = 0;
}

void onchange(char num)
{
  for(int i=0;i<4;i++)
    digitalWrite( IN[i], num & (0x01<<i)?HIGH:LOW );

}

void setup()
{
  pinMode( pinInterrupt, INPUT);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), mycode, CHANGE);
  MsTimer2::set(1000, myTimer);
  MsTimer2::start(); 
}
 
void loop()
{
  onchange(tick);
}
