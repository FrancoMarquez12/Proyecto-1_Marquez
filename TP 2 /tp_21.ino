#define RED 9
#define GREEN 10
#define BLUE 11
#define BUZZER 6
#define BTN 4
#define POT_DELAY A0
#define POT_R A1
#define POT_G A2
#define POT_B A3

bool encendido = false;
int estadoAnterior = HIGH;

void setup() {
  pinMode(BTN, INPUT_PULLUP);
  pinMode(RED, INPUT);
  pinMode(GREEN, INPUT);
  pinMode(BLUE, INPUT);
  pinMode(BUZZER, INPUT);
}

void loop() {
  int lecturaBtn = digitalRead(BTN);

  if (lecturaBtn == LOW && estadoAnterior == HIGH) {
    delay(50); 
    encendido = !encendido;
    
    if (!encendido) {
      analogWrite(RED, 0);
      analogWrite(GREEN, 0);
      analogWrite(BLUE, 0);
      analogWrite(BUZZER, 0);
    }
  }
  estadoAnterior = lecturaBtn;

  if (encendido) {
    int valT = analogRead(POT_DELAY);
    int valR = analogRead(POT_R);
    int valG = analogRead(POT_G);
    int valB = analogRead(POT_B);
    
    float seg = map(valT, 0, 1023, 0, 3000) / 1000.0;
    int r = map(valR, 0, 1023, 0, 255);
    int g = map(valG, 0, 1023, 0, 255);
    int b = map(valB, 0, 1023, 0, 255);
    
    Serial.print("Tiempo: "); Serial.println(seg);
    Serial.print("R:"); Serial.println(r);
    Serial.print("G:"); Serial.println(g);
    Serial.print("B:"); Serial.println(b);

    analogWrite(RED, r);
    analogWrite(GREEN, g);
    analogWrite(BLUE, b);

    delay(map(valT, 0, 1023, 0, 3000)); 

    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
    
    analogWrite(BUZZER, 100);
    delay(100);
    analogWrite(BUZZER, 0);
  }
}
