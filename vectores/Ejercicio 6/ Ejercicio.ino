int numeros[] = {2, 6, 10, 11};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 4; i++) {
    Serial.print("Multiplos de ");
    Serial.println(numeros[i]);

    for (int j = 1; j <= 5; j++) {
      Serial.println(numeros[i] * j);
    }

    Serial.println();
  }
}

void loop() {
}
