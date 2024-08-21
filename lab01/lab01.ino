// C++ code
//
int led=11;
void setup()
{
  pinMode(led,OUTPUT);
}
void loop()
{
  digitalWrite(led, 200);
  delay(1000);
  digitalWrite(led, 0);
  delay(1000);
}