int i=0;
void setup()
{ for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i++)
  {
  digitalWrite(i, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  }
  digitalWrite(0, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(1, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(5, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(6, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
  digitalWrite(0, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
}