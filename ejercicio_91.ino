void fillMultiplesOfTen(int arr[5]) {
  for (int i = 0; i < 5; i++) {
    arr[i] = random(0, 11) * 10;
  }
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  int vectorVacio[5];

  fillMultiplesOfTen(vectorVacio);

  Serial.println("Vector lleno de multiplos de 10:");
  for (int i = 0; i < 5; i++) {
    Serial.print(vectorVacio[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
}