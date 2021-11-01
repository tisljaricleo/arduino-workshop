void setup() {
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(5, 1);
  delay(1000);
  digitalWrite(5, 0);
  delay(1000);
}
