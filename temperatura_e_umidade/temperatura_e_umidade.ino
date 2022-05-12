#include <DHT.h> // Inclui a biblioteca DHT Sensor Library
#define pinoDHT 2 // Define o pino 2 para receber os dados seriais do DHT11
#define tipoDHT DHT11 // Define o tipo do DHT como DHT 11
DHT dht (pinoDHT, tipoDHT); // Estabelece os parâmetros do sensor para a biblioteca
void setup ()
{
Serial.begin (9600); // Inicializa a comunicação serial
dht.begin (); // Inicializa o DHT 11
}
void loop ()
{
float u = dht.readHumidity (); // Cria a variável u (float - aceita casas decimais) e lê o valor da umidade
float t = dht.readTemperature (); // Cria a variável t (float) e lê o valor da temperatura
if (isnan (u) || isnan (t)) // Verifica se as variáveis u e t numéricas (isnan = is not a number)
{
return; // Se uma delas não for numérica, retorna para nova leitura
}
Serial.print ("Umidade = "); // Imprime no monitor serial o valor da umidade
Serial.print (u);
Serial.print (" %"); // Imprime a unidade e pula a linha
Serial.print (" - Temperatura = "); // Imprime no monitor serial o valor da temperatura
Serial.print (t);
Serial.println (" °C "); // Imprime a unidade e pula a linha
delay (2000); // Intervalo de 2 s entre as medições
}
