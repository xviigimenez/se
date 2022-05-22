void setup()
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  int i;
  int t;
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(10,HIGH);
  delay(3000);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  for (i = 0; i < 5; ++i) {
    for (t = 100; t > 1; --t) {
      digitalWrite(12,HIGH);
      delay(t); 
      digitalWrite(12,LOW);
      delay(t);
      digitalWrite(11,HIGH);
      delay(t);  
      digitalWrite(11,LOW);
      delay(t);
      digitalWrite(10,HIGH);
      delay(t);
      digitalWrite(10,LOW);  
    }
    
  }
  delay(250);
}
