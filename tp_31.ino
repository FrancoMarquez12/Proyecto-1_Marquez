#include <LiquidCrystal.h>

#define TMP A0
#define LUZ A1
#define BUZZ A2
#define PTR  2
#define ECHO 3
#define TRIG 4
#define GREEN 5
#define BLUE 6
#define RED 7
#define FLEX A3
#define TILT 5
#define HUM A2


              //  rs  E db4 db5 db6 db7 
              //   5  6  10  11  12  13
// LiquidCrystal (rs, e, d4, d5, d6, d7)
LiquidCrystal LCD(8,9 , 10, 11, 12, 13);

byte HeartHeart[] = {
  B01010,
  B10101,
  B10001,
  B10001,
  B01010,
  B00100,
  B00000,
  B00000
};

byte simboloGrados[] = {
  B01110,
  B11011,
  B10101,
  B11111,
  B11011,
  B00000,
  B00000,
  B00000
};


void setup()
{
  pinMode( PTR , INPUT );
  pinMode( ECHO , INPUT );
  pinMode( BUZZ , OUTPUT );
  pinMode( RED , OUTPUT );
  pinMode( GREEN , OUTPUT );
  pinMode( BLUE , OUTPUT );
  pinMode( TRIG , OUTPUT );
  pinMode( FLEX , INPUT );
  pinMode( TILT , INPUT );
  pinMode( HUM , INPUT );
  
 			//0-6
  LCD.createChar( 4 , HeartHeart );
  LCD.createChar( 5 , simboloGrados );
  LCD.begin(16,2);
}

void loop()
{
  delay(200);
  LCD.clear();
  
  int valorLDR = analogRead(LUZ); 
  int luzPorcentaje = map(valorLDR, 0, 1023, 0, 100); 
  
  int valorTMP = analogRead(TMP);
  float voltaje = valorTMP * (5.0 / 1023.0);
  float temperatura = (voltaje - 0.5) * 100.0;
  
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  
  bool inclinado = digitalRead(TILT);
  
  LCD.print( "Se cae?:");
 		//	IF Ternario
  LCD.print( inclinado ? "Se cae." : "Quieto."  );
  
  int humedad = analogRead(HUM);
  humedad = map( humedad , 0,876,0,100);
  LCD.setCursor(0,1);
  LCD.print("Hum:");
  LCD.print( humedad );
  LCD.print("%");
  
  
  int angulo = analogRead(FLEX);
  angulo = map( angulo , 59,256,180,0);
  LCD.setCursor(9,1);
  LCD.print( angulo );
  LCD.write( 5 );
  
  
  
  digitalWrite(TRIG , LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG , HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG , LOW);
  
  float tiempo = pulseIn( ECHO , HIGH );
  float dist = tiempo / 57.6;
  
  int mov = digitalRead(PTR); 
  
  if (luzPorcentaje < 20) {
    if (mov == HIGH || temperatura > 39.0) {
      digitalWrite(RED, HIGH);
      tone(BUZZ, 1000, 500);
    }
  } 
  else {
    if (dist < 100) {
      digitalWrite(RED, HIGH);
      tone(BUZZ, 800, 200);
      delay(200);
    }
    else if (temperatura > 39.0) {
      digitalWrite(RED, HIGH);
      tone(BUZZ, 600, 100);
    }
    else if (mov == HIGH) {
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, HIGH);
      tone(BUZZ, 400, 100);
    }
    else {
      digitalWrite(GREEN, HIGH);
    }
  }

  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("T:"); 
  LCD.print(temperatura, 1); 
  LCD.print("C L:"); 
  LCD.print(luzPorcentaje); 
  LCD.print("%");
  LCD.setCursor(0, 1);
  LCD.print("D:"); 
  LCD.print(dist); 
  LCD.print("cm M:"); 
  LCD.print(mov);
  
  delay(500);
}