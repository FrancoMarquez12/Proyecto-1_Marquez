#include <Adafruit_NeoPixel.h>

#define LED_PIN 3
#define BOT 2
#define BUZZ A0
#define NUM_TIRAS 8
#define LEDS_POR_TIRA 5
#define TOTAL_LEDS 40

Adafruit_NeoPixel leds(TOTAL_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(BOT, INPUT_PULLUP);
  pinMode(BUZZ, OUTPUT);
  
  leds.begin();
  leds.setBrightness(80);
  leds.clear();
  leds.show();
  randomSeed(analogRead(A1));
  mostrarDados(1, 1);
}

void loop() {

  if (digitalRead(BOT) == LOW) {
    delay(30);
    
    if (digitalRead(BOT) == LOW) {
      lanzarDados();
      while (digitalRead(BOT) == LOW) {
        delay(10);
      }
      delay(30);
    }
  }
}

void lanzarDados() {

  int dado1 = random(1, 7);
  int dado2 = random(1, 7);
  
  for (int i = 0; i < 15; i++) {
    
    int numero1 = random(1, 7);
    int numero2 = random(1, 7);
    
    mostrarDados(numero1, numero2);
    delay(60);
  }
  
  mostrarDados(dado1, dado2);
  delay(500);
  
  if (dado1 + dado2 == 7) {
    victoria();
  }
}

void mostrarDados(int dado1, int dado2) {
  
  mostrarDado(0, dado1);
  mostrarDado(1, dado2);
  
  leds.show();
}

void mostrarDado(int numeroDado, int numero) {
  
  int primeraTira;
  
  if (numeroDado == 0) {
    primeraTira = 0;
  } else {
    primeraTira = 4;
  }
  
  for (int tira = 0; tira < 4; tira++) {
    for (int led = 0; led < LEDS_POR_TIRA; led++) {
      int posicion = (primeraTira + tira) * LEDS_POR_TIRA + led;
      leds.setPixelColor(posicion, 0);
    }
  }
  
  uint32_t rojo = leds.Color(255, 0, 0);
  
  if (numero == 1) {
    encenderPunto(primeraTira, 1, 2, rojo);
  } else if (numero == 2) {
    
    encenderPunto(primeraTira, 0, 0, rojo);
    encenderPunto(primeraTira, 3, 4, rojo);
    
  } else if (numero == 3) {
    
    encenderPunto(primeraTira, 0, 0, rojo);
    encenderPunto(primeraTira, 1, 2, rojo);
    encenderPunto(primeraTira, 3, 4, rojo);
    
  } else if (numero == 4) {
    
    encenderPunto(primeraTira, 0, 0, rojo);
    encenderPunto(primeraTira, 3, 0, rojo);
    encenderPunto(primeraTira, 0, 4, rojo);
    encenderPunto(primeraTira, 3, 4, rojo);
    
  } else if (numero == 5) {
    
    encenderPunto(primeraTira, 0, 0, rojo);
    encenderPunto(primeraTira, 3, 0, rojo);
    encenderPunto(primeraTira, 1, 2, rojo);
    encenderPunto(primeraTira, 0, 4, rojo);
    encenderPunto(primeraTira, 3, 4, rojo);
    
  } else if (numero == 6) {
    
    encenderPunto(primeraTira, 0, 0, rojo);
    encenderPunto(primeraTira, 3, 0, rojo);
    encenderPunto(primeraTira, 0, 2, rojo);
    encenderPunto(primeraTira, 3, 2, rojo);
    encenderPunto(primeraTira, 0, 4, rojo);
    encenderPunto(primeraTira, 3, 4, rojo);
  }
}

void encenderPunto(int primeraTira, int columna, int fila, uint32_t color) {
  
  int tira = primeraTira + columna;
  int posicion = tira * LEDS_POR_TIRA + fila;
  leds.setPixelColor(posicion, color);
}

void victoria() {
  
  tone(BUZZ, 1000);
  for (int i = 0; i < 6; i++) {
    for (int led = 0; led < TOTAL_LEDS; led++) {
      leds.setPixelColor(led, leds.Color(255, 0, 0));
    }
    leds.show();
    delay(150);
    leds.clear();
    leds.show();
    delay(150);
  }

  noTone(BUZZ);
}