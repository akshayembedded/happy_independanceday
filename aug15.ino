const int DIR = 12;
const int STEP = 14;
const int  steps_per_rev = 200;

void setup()
{
  Serial.begin(115200);
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(27,INPUT);
}
void loop()
{
  if(digitalRead(27))
  {
  digitalWrite(DIR, LOW);
  Serial.print("Spinning Clockwise...  ");
  Serial.println(digitalRead(27));
  for(int i = 0; i<steps_per_rev; i++)
  {
    digitalWrite(STEP, HIGH);
    delayMicroseconds(2000);
    digitalWrite(STEP, LOW);
    delayMicroseconds(2000);
    if(!digitalRead(27))
    break;
  }
  }
  
  

}
