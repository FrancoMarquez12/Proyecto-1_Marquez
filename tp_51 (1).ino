#include <Adafruit_NeoPixel.h>

#define NEOPIN 3
#define CANT_PIXEL 13

#define POT A1
#define BOT 2

Adafruit_NeoPixel NEO = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

int modoEfecto = 0;
bool botonPresionado = false;

void setup() {   
  pinMode(NEOPIN , OUTPUT);
  NEO.begin();
  NEO.clear();
  NEO.show();
  
  pinMode(BOT, INPUT_PULLUP);
  
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {

  if (digitalRead(BOT) == LOW) {
    if (!botonPresionado) {
      modoEfecto++;
      if (modoEfecto > 2) modoEfecto = 0;
      NEO.clear();
      NEO.show();
      delay(300);
      botonPresionado = true;
    }
  } else {
    botonPresionado = false;
  }

  switch (modoEfecto) {
    case 0:
      EfectoIda();
      break;
    case 1:
      ejecutarEfectoVuelta();
      break;
    case 2:
      EfectoRandom();
      break;
  }
}

int obtenerDelayVelocidad() {
  int lectura = analogRead(POT);
  int tiempoDelay = map(lectura, 0, 1023, 50, 800); 
  return tiempoDelay;
}

void EfectoIda() {
  for (int i = 0; i < CANT_PIXEL; i++) {
    if (digitalRead(BOT) == LOW) return;

    if (i % 3 == 0) NEO.setPixelColor(i, NEO.Color(255, 0, 0));
    else if (i % 3 == 1) NEO.setPixelColor(i, NEO.Color(0, 255, 0));
    else NEO.setPixelColor(i, NEO.Color(0, 0, 255));
    
    NEO.show();
    delay(obtenerDelayVelocidad());
    NEO.clear();
  }
}

void ejecutarEfectoVuelta() {
  for (int i = CANT_PIXEL - 1; i >= 0; i--) {
    if (digitalRead(BOT) == LOW) return;

    if (i % 3 == 0) NEO.setPixelColor(i, NEO.Color(255, 0, 0));
    else if (i % 3 == 1) NEO.setPixelColor(i, NEO.Color(0, 255, 0));
    else NEO.setPixelColor(i, NEO.Color(0, 0, 255));
    
    NEO.show();
    delay(obtenerDelayVelocidad());
    NEO.clear();
  }
}

void EfectoRandom() {
  if (digitalRead(BOT) == LOW) return;

  byte randomRED = random(100, 256);
  byte randomBLUE = random(100, 256);

  for (int i = 0; i < CANT_PIXEL; i++) {
    if (i % 2 == 0) NEO.setPixelColor(i, NEO.Color(randomRED, 0, 0));
  }
  NEO.show();
  delay(obtenerDelayVelocidad());
  NEO.clear();
  NEO.show();
  if (digitalRead(BOT) == LOW) return;
  for (int i = 0; i < CANT_PIXEL; i++) {
    if (i % 2 != 0) NEO.setPixelColor(i, NEO.Color(0, 0, randomBLUE));
  }
  NEO.show();
  delay(obtenerDelayVelocidad());
  NEO.clear();
  NEO.show();
}





