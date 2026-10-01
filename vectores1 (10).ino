int numeros[10];

int buzz = A0;

void setup() {
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);

  randomSeed(analogRead(A0));

  for (int i = 0; i < 10; i++) {

    numeros[i] = random(1, 11);

    Serial.println(numeros[i]);

    if (numeros[i] == 5) {
      tone(buzz, 1000, 500);
    }
  }
}

void loop() {
}