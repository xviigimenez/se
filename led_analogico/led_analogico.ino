//2022-03-23
int PIN = 6;
int PWM, x = 0;
void setup() {
  pinMode(PIN,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  for (PWM = 0; PWM < 255; PWM = PWM + x) {
      if (PWM == 0) {
        x = 1;
      }
      if (PWM == 255) {
        x = -1;
      }
      analogWrite(PIN,PWM);
      Serial.print("Intensidade = ");
      Serial.println(PWM);
      delay(100);
  }
}
