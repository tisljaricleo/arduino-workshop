void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  //  tone(Ime_pina, 
  //       Frekvencija_tona, 
  //       Trajanje_milisekunde)
  tone(7, 600, 500); 
  delay(1000);
}
