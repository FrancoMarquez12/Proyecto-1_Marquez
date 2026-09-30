int vector[] = {1, 0, 0, 1, 1, 0, 1, 1};
int RED = 2;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(led, vector[i]);
    delay(500);
  }
}