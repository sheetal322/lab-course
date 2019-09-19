void setup() {
  // put your setup code here, to run once:
for(int y=3;y<7;y++)
{
  pinMode(y,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int y=3;y<7;y++)
{
  digitalWrite(y,HIGH);
  delay(500);
  digitalWrite(y,LOW);
  delay(500);
}
}
