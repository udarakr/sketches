int optocouplerPin = 2;
void setup()
{
  pinMode(optocouplerPin, OUTPUT);

void loop()
{
  digitalWrite(optocouplerPin, HIGH);
  delay(1000);
  digitalWrite(optocouplerPin, LOW);
  delay(1000);                   
}

