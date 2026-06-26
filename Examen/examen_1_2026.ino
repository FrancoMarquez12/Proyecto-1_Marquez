#include <LiquidCrystal.h>

#include <Adafruit_NeoPixel.h>

#define FLEX       A5
#define BOT        2
#define NEOPIN     13
#define CANT_PIXEL 6

// LiquidCrystal (rs, e, d4, d5, d6, d7)
LiquidCrystal LCD(5, 6, 7, 8, 9, 10);

Adafruit_NeoPixel NEO = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

int ApagadoTotal = 0;
bool botonPresionado = false;

void setup()
{

  pinMode( FLEX   , INPUT );
  pinMode( NEOPIN , OUTPUT);
  pinMode( BOT    , INPUT_PULLUP);
  
  NEO.begin();
  NEO.clear();
  NEO.show();
  
  LCD.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  delay(200);
  LCD.clear();
  
  if (digitalRead(BOT) == LOW) {
   if (!botonPresionado) {
     ApagadoTotal++;
     if (ApagadoTotal > 2) ApagadoTotal = 0;
      botonPresionado = true;
    }
  } else {
    botonPresionado = false;
  }
  
  int ANGULO = analogRead(FLEX);
  ANGULO = map( ANGULO , 1,7,180,0);
  
  Serial.print("Flex: ");
  Serial.println(FLEX);
  Serial.print("Angulo: ");
  Serial.println(ANGULO);
  
  
  if (45 > ANGULO){
    NEO.setPixelColor(0, NEO.Color(0, 255, 0));
    delay(500);
    NEO.setPixelColor(1, NEO.Color(0, 255, 0));
    NEO.show();
  }
  
  if (ANGULO > 45){
    NEO.setPixelColor(2, NEO.Color(255, 255, 0));
    delay(500);
    NEO.setPixelColor(3, NEO.Color(255, 255, 0));
    NEO.show();
  }
    
  if (ANGULO > 90){
    NEO.setPixelColor(4, NEO.Color(255, 0, 0));
    delay(500);
    NEO.setPixelColor(5, NEO.Color(255, 0, 0));
    NEO.show();
  }
    
  LCD.setCursor(0,0);
  LCD.print("FLEX: ");
  LCD.print(ANGULO);
  
  if (45 > ANGULO){
    LCD.setCursor(0,1);
    LCD.print("Sig Color: Amar.");
  }
  
  if (45 < ANGULO){
    LCD.setCursor(0,1);
    LCD.print("Sig Color: Rojo");
  }
  
  if (90 < ANGULO){
    LCD.setCursor(0,1);
    LCD.print("ciclo terminado");
  }
  
  if (45 > ANGULO){
    Serial.println("Led: 1 y 2");
  }
  
  if (45 < ANGULO){
    Serial.println("Led: 3 y 4");
  }
  
  if (90 < ANGULO){
    Serial.println("Led: 5 y 6");
  }
  
  if (45 > ANGULO){
    Serial.println("Color: Verde");
  }
  
  if (45 < ANGULO){
    Serial.println("Color: Amarillo");
  }
  
  if (90 < ANGULO){
    Serial.println("Color: Rojo");
  }
  
  delay(1000);
}













