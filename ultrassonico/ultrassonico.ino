#include <Ultrasonic.h> // Carrega a biblioteca do sensor HC-SR04
#define trigger 4 // Define o pino 4 como trigger
#define echo 5 // Define o pino 5 como echo

int buzzer = 8;

Ultrasonic ultrasonic (trigger, echo); // Inicializa o sensor

void setup () {
  Serial.begin (9600);
  Serial.println ("Lendo dados do sensor...");
  pinMode(buzzer,OUTPUT);
}

void loop () {
  float cmMsec, inMsec; // Leitura em cm e polegadas
  long microsec = ultrasonic.timing ();
  cmMsec = ultrasonic.convert (microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert (microsec, Ultrasonic::IN);
  Serial.print ("Distancia em cm: ");
  Serial.print (cmMsec);
  Serial.print (" - Distancia em polegadas: ");
  Serial.println (inMsec);
  delay(1000);
  if (cmMsec > 20) {
    digitalWrite(buzzer, HIGH);
  }
  else {
    digitalWrite(buzzer, LOW);
  }
}
