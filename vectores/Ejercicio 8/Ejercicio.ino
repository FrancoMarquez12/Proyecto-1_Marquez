int led = 2;
int BOT = 3;

int secuencia[5];

void setup() {
  pinMode(led, OUTPUT);
  pinMode(BOT, INPUT);
  Serial.begin(9600);
}

void loop() {

  for (int i = 0; i < 5; i++) {

    digitalWrite(led, HIGH);
    delay(1000);

    digitalWrite(led, LOW);
    delay(500);

    secuencia[i] = digitalRead(BOT);
  }

  Serial.println("Secuencia:");

  for (int i = 0; i < 5; i++) {
    Serial.println(secuencia[i]);
  }
  delay(2000);
}
