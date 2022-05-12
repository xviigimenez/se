// 2022-02-16
void setup() {
  pinMode(13,OUTPUT);
}
void loop() {
  int i;
  // ...
  for (i = 0; i < 3; ++i) {
    digitalWrite(13,1);
    delay(250);  
    digitalWrite(13,0);
    delay(250);  
  }
  delay(250);
  // - - -
  for (i = 0; i <3; ++i) {
    digitalWrite(13,1);
    delay(500);
    digitalWrite(13,0);
    delay(500);
  }
  delay(250);
  // ...
  for (i = 0; i < 3; ++i) {
    digitalWrite(13,1);
    delay(250);  
    digitalWrite(13,0);
    delay(250); 
  }
  delay(500);
}
