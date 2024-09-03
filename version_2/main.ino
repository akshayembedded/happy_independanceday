#include "header.h"
void setup()
{
  Serial.begin(115200);
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(flagdown,INPUT);
  pinMode(flagup,INPUT);
}
void loop()
{
  if(digitalRead(flagup)==1)
  {
  Serial.println("Spinning Clockwise...");
  stepper(up);//HIGH -> up | LOW-> down
  delay(1000);
  }
  else if(digitalRead(flagdown)==1)
  {
  //HIGH -> up | LOW-> down
  Serial.println("Spinning Clockwise...");
  stepper(up);
  delay(1000);
  }
}

