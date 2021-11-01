void setup() {
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(5) == 1)
  {
    digitalWrite(3, 1);
  }
  else
  {
    digitalWrite(3, 0);
  }

}
