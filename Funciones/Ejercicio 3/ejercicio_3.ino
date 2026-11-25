#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void showWelcome() {
  lcd.clear();
  lcd.print("Bienvenido");
}

void showGameStart() {
  lcd.clear();
  lcd.print("Inicio de Juego");
}

void showGameOver() {
  lcd.clear();
  lcd.print("Fin de Juego");
}

void showScore() {
  lcd.clear();
  lcd.print("Puntuacion: ");
  lcd.print(random(0, 100));
}

void setup() {
  lcd.begin(16, 2);
  showWelcome();
  delay(2000);
  showGameStart();
  delay(2000);
}

void loop() {
  showScore();
  delay(3000);
  showGameOver();
  delay(3000);
  showGameStart();
  delay(3000);
}
