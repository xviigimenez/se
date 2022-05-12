/* 2022-05-11
  ---------------+---------------
          ___ /^^[___              _
         /|^+----+   |#___________//
       ( -+ |____|    ______-----+/
        ==_________--'            \
          ~_|___|__
*/
void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop() {
  /*
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    delay(3000);
    digitalWrite(8,HIGH);
    delay(5000);
    digitalWrite(8,LOW);
    delay(3000);
    digitalWrite(7,HIGH);
    delay(5000);
  */
  analogWrite(7, 100);
  delay(1000);
  analogWrite(8, 150);
  delay(1000);
  analogWrite(8, 200);
  delay(1000);
  analogWrite(7, 255);
  delay(100);
}
