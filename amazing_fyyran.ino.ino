// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
   delay(1000); 
  digitalWrite(12,HIGH);
  delay(800);
  digitalWrite(12,LOW);
  delay(800);
   digitalWrite(12,HIGH);
  delay(800);
  digitalWrite(12,LOW);
  delay(800);
   digitalWrite(12,HIGH);
  delay(800);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(800);
   digitalWrite(11,HIGH);
  delay(800);
  digitalWrite(11,LOW);
  delay(800);
  
  
  
}