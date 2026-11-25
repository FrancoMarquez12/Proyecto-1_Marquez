#define BUZZ 2

void setup() {
  pinMode(BUZZ, OUTPUT);
}

void playMelody1() {
  tone(2, 262, 200);
  delay(250);
  tone(2, 294, 200);
  delay(250);
}

void playMelody2() {
  tone(2, 330, 200);
  delay(250);
  tone(2, 349, 200);
  delay(250);
}

void loop() {
  playMelody1();
  delay(1000);
  playMelody2();
  delay(1000);
}
