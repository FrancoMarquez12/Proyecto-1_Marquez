#define BOT 1

int ledActual = 2;

void setup()
{
  pinMode( BOT , INPUT_PULLUP);
  pinMode( 2 , OUTPUT );
  pinMode( 3 , OUTPUT );
  pinMode( 4 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT );
  pinMode( 7 , OUTPUT );
  pinMode( 8 , OUTPUT );
  pinMode( 9 , OUTPUT );
  pinMode( 10, OUTPUT );
  pinMode( 11, OUTPUT );
  pinMode( 12, OUTPUT );
}

void loop() {
  
    if (digitalRead(BOT) == HIGH) {
    
    digitalWrite( 2 , LOW );
    digitalWrite( 3 , LOW );
    digitalWrite( 4 , LOW );
    digitalWrite( 5 , LOW );
    digitalWrite( 6 , LOW );
    digitalWrite( 7 , LOW );
    digitalWrite( 8 , LOW );
    digitalWrite( 9 , LOW );
    digitalWrite( 10, LOW );
    digitalWrite( 11, LOW );
    digitalWrite( 12, LOW );
    
    digitalWrite(ledActual, HIGH);   

    ledActual++;
    if (ledActual > 12) ledActual = 2;

    delay(1000); 
  }
}
