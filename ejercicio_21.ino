#define TRIG 2
#define ECHO 3

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

long getDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duration = pulseIn(ECHO, HIGH);
  long distance = duration * 0.034 / 2;
  return distance;
}

void loop() {
  long dist = getDistance();
  Serial.print("Distancia: ");
  Serial.print(dist);
  Serial.println(" cm");
  delay(500);
}