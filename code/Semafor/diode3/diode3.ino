

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);

  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);

  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);

   digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);

  delay(1000);
}
