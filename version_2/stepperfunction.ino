

void stepper(int dir)
{
  digitalWrite(DIR, dir);
  for(int j=0;j<=21;j++)
    for(int i = 0; i<steps_per_rev; i++)
    {
      digitalWrite(STEP, HIGH);
      delayMicroseconds(2000);
      digitalWrite(STEP, LOW);
      delayMicroseconds(2000);
    }
}