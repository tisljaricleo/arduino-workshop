void setup() {
  pinMode(2, OUTPUT);   // Trigger pin.
  pinMode(3, INPUT);    // Echo pin.
  Serial.begin(9600);
}

void loop() {
  int udaljenost = dajUdaljenost(2, 3);

  Serial.print("Udaljenost: ");
  Serial.println(udaljenost);

  if (udaljenost < 10)
  {
    tone(7, 300, 100);
    delay(1000);
  }
}

int dajUdaljenost(int triggerPin, int echoPin)
{
  long trajanje;
  int udaljenost;

  digitalWrite(triggerPin, LOW);
  delayMicroseconds(triggerPin);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  trajanje = pulseIn(echoPin, HIGH);

  // udaljenost = vrijeme_odbijanja_signala(s) * brzina_zvuka(m/s) / 2 
  udaljenost = trajanje * 0.034 / 2;

  return udaljenost;
}
