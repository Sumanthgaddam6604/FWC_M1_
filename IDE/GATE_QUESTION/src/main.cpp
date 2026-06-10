/******************************************************************************

#include <Arduino.h>

void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  digitalWrite(6, e);
  digitalWrite(7, f);
  digitalWrite(8, g);
}

void displayBit(int bit)
{
  if(bit == 0)
  {
    // 0
    sevenseg(1,1,1,1,1,1,0);
  }
  else
  {
    // 1
    sevenseg(0,1,1,0,0,0,0);
  }
}

uint16_t num = 0xFFE4; 

void setup()
{
  for(int i=2; i<=8; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  
  for(int i=15; i>=0; i--)
  {
    int bitValue = (num >> i) & 0x01;

    displayBit(bitValue);

    delay(1000);  
  }
}