// 2022-02-16
int LED = 13;
void setup() {
  pinMode(LED,OUTPUT);
}
void loop() {
  // Acende o LED
  digitalWrite(LED,HIGH);
  delay(250);
  // Desliga o LED
  digitalWrite(LED,LOW);
  delay(250);
}
