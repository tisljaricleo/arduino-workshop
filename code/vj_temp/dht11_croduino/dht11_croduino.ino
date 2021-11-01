#include "DHT.h"
 
#define DHTPIN A0 // na koji pin je povezan DHT11
#define DHTTYPE DHT11
 
DHT dht(DHTPIN, DHTTYPE);
 
void setup() {
  Serial.begin(9600); 
  dht.begin();
}
 
void loop() {
  //pričekati par sekundi između svakog mjerenja
  delay(2000);
 
  // očitava vlagu u varijabli h te temperaturu u varijabli t
  float h = dht.readHumidity();
  float t = dht.readTemperature();
 
  if (isnan(h) || isnan(t)) {
    Serial.println("Neuspješno očitavanje senzora! ");
    return;
  }
 
  Serial.print("Vlaga: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" *C ");
}
