void setAllHigh(const int pins[], int size) {
  for (int i = 0; i < size; i++) {
    digitalWrite(pins[i], HIGH);
  }
}

const int misPines[] = {2, 3, 4, 5};
const int numPines = 4;

void setup() {
  for (int i = 0; i < numPines; i++) {
    pinMode(misPines[i], OUTPUT);
  }
}

void loop() {
  setAllHigh(misPines, numPines);
  delay(1000);
  for (int i = 0; i < numPines; i++) {
    digitalWrite(misPines[i], LOW);
  }
  delay(1000);
}