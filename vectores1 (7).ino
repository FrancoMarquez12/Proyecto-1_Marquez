int leds[] = {2, 3, 4, 5, 6};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(300);
  }

  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], LOW);
    delay(300);
  }
}