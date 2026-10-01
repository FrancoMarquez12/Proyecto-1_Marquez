int vector1[] = {1, 0, 0, 1, 1, 0, 1, 1};
int vector2[] = {0, 1, 0, 1, 0, 0, 1, 0};

int led1 = 12;
int led2 = 13;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(led1, vector1[i]);
    digitalWrite(led2, vector2[i]);
    delay(500);
  }
}
