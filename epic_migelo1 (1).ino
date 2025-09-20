// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1000); // aguarde 1000 millisecond aceso(s)
  digitalWrite(9, LOW);
  delay(1000); // aguarde 1000 millisecond aceso(s)
   digitalWrite(10, HIGH);
  delay(1000); // aguarde 1000 millisecond aceso(s)
  digitalWrite(10,LOW);// 
  delay(1000); // aguarde 1000 millisecond aceso(s)
   digitalWrite(11, HIGH);
  delay(1000); // aguarde 1000 millisecond aceso(s)
  digitalWrite(11,LOW);
   delay(1000); // aguarde 1000 millisecond aceso(s)
}