void setup() {
  pinMode(2, OUTPUT);   // Trigger pin. 
  pinMode(3, INPUT);    // Echo pin.
  Serial.begin(9600);  
}

void loop() {
  int udaljenost = dajUdaljenost(2, 3);
  Serial.print("Udaljenost: ");
  Serial.println(udaljenost);
}

int dajUdaljenost(int triggerPin, int echoPin)
{
  long duration;
  int distance;

  // Clears the trigPin
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(triggerPin);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Prints the distance on the Serial Monitor
 

  return distance;
}
