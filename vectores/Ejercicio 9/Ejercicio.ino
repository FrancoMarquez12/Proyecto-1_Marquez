int colores[3][3] = {
  {122, 234, 21},
  {33, 53, 155},
  {200, 255, 12}
};

int rojo = 2;
int verde = 4;
int azul = 3;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {

  for (int i = 0; i < 3; i++) {

    analogWrite(rojo, colores[i][0]);
    analogWrite(verde, colores[i][1]);
    analogWrite(azul, colores[i][2]);

    delay(1000);
  }
}
