// 2022-02-16
void setup() {
  pinMode(12,OUTPUT);
}
void loop() {
  int i;
  // . . .
  for (i = 0; i < 3; ++i) {
    digitalWrite(12,1);
    delay(150);  
    digitalWrite(12,0);
    delay(150);  
  }
  delay(250);
  // - - -
  for (i = 0; i <3; ++i) {
    digitalWrite(12,1);
    delay(500);
    digitalWrite(12,0);
    delay(500);
  }
  delay(250);
  // . . .
  for (i = 0; i < 3; ++i) {
    digitalWrite(12,1);
    delay(150);  
    digitalWrite(12,0);
    delay(150); 
  }
  delay(500);
}
