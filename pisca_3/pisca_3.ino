// 2022-02-16
int LED = 13;
int T = 500;
void setup() {
  pinMode(LED,OUTPUT);
}
void loop() {
  digitalWrite(LED,HIGH);
  delay(T);
  digitalWrite(LED,LOW);
  delay(T/5);
}
