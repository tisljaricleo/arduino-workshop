void setup() {
  pinMode(3, INPUT);
  pinMode(6, INPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Pin D3: ");
  Serial.println(digitalRead(3));

  Serial.print("Pin D6: ");
  Serial.println(digitalRead(6));

  Serial.print("Pin D8: ");
  Serial.println(digitalRead(8));

  delay(3000);  
}
