#define PIR 2
#define LED 3

void checkMotion() {
  int motion = digitalRead(PIR);
  if (motion == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}

void setup() {
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  checkMotion();
  }
