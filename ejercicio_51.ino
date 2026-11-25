int rollDice(int sides) {
  return random(1, sides + 1);
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  int resultado = rollDice(6);
  Serial.print("Dado de 6 caras: ");
  Serial.println(resultado);
  delay(2000);
}