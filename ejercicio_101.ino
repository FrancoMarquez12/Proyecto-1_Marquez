const int BOT = 3;
const int LED = 2;

void configurePins(const int inputPins[], int numInputs, const int outputPins[], int numOutputs) {
  for (int i = 0; i < numInputs; i++) {
    pinMode(inputPins[i], INPUT_PULLUP);
  }
  for (int i = 0; i < numOutputs; i++) {
    pinMode(outputPins[i], OUTPUT);
  }
}

const int entradas[] = {BOT};
const int salidas[] = {LED};

void setup() {
  
  configurePins(entradas, 1, salidas, 1);
}

void loop() {
  int estadoBoton = digitalRead(BOT);
  
  if (estadoBoton == LOW) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}