#define RED 			3
#define BLUE 			4
#define GREEN 			5
#define REDRED 			6
#define BLUEBLUE 		7
#define GREENGREEN 		8
#define REDREDRED       9
#define BLUEBLUEBLUE    10
#define GREENGREENGREEN 11
#define BOT 			2

int estadoBotonActual = LOW;
int estadoBotonAnterior = LOW;
int contador = 0;


void setup()
{
  pinMode( BOT  , INPUT_PULLUP );
  pinMode( RED   ,  OUTPUT );
  pinMode( BLUE   ,  OUTPUT );
  pinMode( GREEN   ,  OUTPUT );
  pinMode( REDRED   ,  OUTPUT );
  pinMode( BLUEBLUE   ,  OUTPUT );
  pinMode( GREENGREEN  ,  OUTPUT );
  pinMode( REDREDRED    ,  OUTPUT );
  pinMode( BLUEBLUEBLUE   ,  OUTPUT );
  pinMode( GREENGREENGREEN  , OUTPUT );
}

void loop() {
      digitalWrite(RED, LOW);
      digitalWrite(BLUE, LOW);
      digitalWrite(GREEN, LOW);
      digitalWrite(REDRED, LOW);
      digitalWrite(BLUEBLUE, LOW);
      digitalWrite(GREENGREEN, LOW);
      digitalWrite(REDREDRED, LOW);
      digitalWrite(BLUEBLUEBLUE, LOW); 
      digitalWrite(GREENGREENGREEN, LOW);

   estadoBotonActual = digitalRead(BOT);

  if (estadoBotonAnterior == HIGH && estadoBotonActual == LOW) 
  { contador++;

    if (contador > 3) {
      contador = 1;
    }

    if (contador == 1) {
      digitalWrite(RED, HIGH);
      digitalWrite(BLUE, HIGH);
      digitalWrite(GREEN, HIGH);
    } 
    else if (contador == 2) {
      digitalWrite(REDRED, HIGH);
      digitalWrite(BLUEBLUE, HIGH);
      digitalWrite(GREENGREEN, HIGH);
    } 
    else if (contador == 3) {
      digitalWrite(REDREDRED, HIGH);
      digitalWrite(BLUEBLUEBLUE, HIGH); 
      digitalWrite(GREENGREENGREEN, HIGH);
    }

    delay(500);
  }
}