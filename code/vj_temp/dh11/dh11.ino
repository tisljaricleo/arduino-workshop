#include <dht.h>

dht DHT;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int provjera = DHT.read11(7);
  Serial.print("Provjera = ");    // Mora biti -1.
  Serial.println(provjera);
  Serial.print("Temperatura = ");
  Serial.println(DHT.temperature);
  Serial.print("Vlaznost = ");
  Serial.println(DHT.humidity);
  delay(3000);
}
