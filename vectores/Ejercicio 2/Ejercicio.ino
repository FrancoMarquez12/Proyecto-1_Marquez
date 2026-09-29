int numeros[] = {10, 4, 2};
int aux;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (numeros[i] > numeros[j]) {
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
      }
    }
  }

  Serial.println("Vector ordenado:");

  for (int i = 0; i < 3; i++) {
    Serial.println(numeros[i]);
  }
}

void loop() {
}
