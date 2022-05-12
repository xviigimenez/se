int LED = 4;
int DEL = 6;
int LUZ = A1;
int VLUZ;
void setup() {
    pinMode(LED,OUTPUT);
    pinMode(DEL,OUTPUT);
    pinMode(LUZ,INPUT);
    Serial.begin(9600);
}

void loop() {
    VLUZ = analogRead(LUZ);
    Serial.print("Luminosidade = ");
    Serial.println(VLUZ);
    if (VLUZ > 250 && VLUZ < 500) {
      digitalWrite(DEL,LOW);
      digitalWrite(LED,HIGH);
    }
    else if (VLUZ > 500) {
      digitalWrite(LED,LOW);
      digitalWrite(DEL,HIGH);
    }
    else {
      digitalWrite(LED,LOW);
      digitalWrite(DEL,LOW);
    }
    delay(200);
}
