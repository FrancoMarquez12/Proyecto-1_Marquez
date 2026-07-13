#define LED_RED1   2
#define LED_RED2   5
#define LED_RED3   7
#define LED_BLUE1  4
#define LED_BLUE2  8
#define LED_BLUE3  9
#define LED_GREEN1 3
#define LED_GREEN2 6
#define LED_GREEN3 10
#define BOT   A0
#define POT   A1

bool encendido = false;

void setup()
{
  pinMode( LED_RED1    , OUTPUT );
  pinMode( LED_RED2    , OUTPUT );
  pinMode( LED_RED3    , OUTPUT );
  pinMode( LED_BLUE1   , OUTPUT );
  pinMode( LED_BLUE2   , OUTPUT );
  pinMode( LED_BLUE3   , OUTPUT );
  pinMode( LED_GREEN1  , OUTPUT );
  pinMode( LED_GREEN2  , OUTPUT );
  pinMode( LED_GREEN3  , OUTPUT );
  pinMode( BOT    , INPUT_PULLUP );
  pinMode( POT    , INPUT );
}

void loop() {
  
  if (digitalRead(BOT) == LOW) {
    encendido = !encendido;
    digitalWrite(LED_RED1, LOW);
    digitalWrite(LED_RED2, LOW);
    digitalWrite(LED_RED3, LOW);
    digitalWrite(LED_BLUE1, LOW);
    digitalWrite(LED_BLUE2, LOW);
    digitalWrite(LED_BLUE3, LOW);
    digitalWrite(LED_GREEN1, LOW);
    digitalWrite(LED_GREEN2, LOW);
    digitalWrite(LED_GREEN3, LOW);
    while (digitalRead(BOT) == LOW);
    delay(200);
  }

  if (encendido) {
    digitalWrite(LED_RED1, HIGH);
    delay(map(analogRead(POT), 0, 1023, 50, 1000));

    
    digitalWrite(LED_RED1  , LOW);
    digitalWrite(LED_GREEN1, HIGH);
    delay(map(analogRead(POT), 0, 1023, 50, 1000));

    
    digitalWrite(LED_GREEN1, LOW);
    digitalWrite(LED_BLUE1 , HIGH);
    delay(map(analogRead(POT), 0, 1023, 50, 1000));

    
    digitalWrite(LED_BLUE1  , LOW);
    digitalWrite(LED_RED2   , HIGH);
    digitalWrite(LED_GREEN2 , HIGH);
    delay(map(analogRead(POT), 0, 1023, 50, 1000));

    
    digitalWrite(LED_RED2    , LOW);
    digitalWrite(LED_GREEN2  , LOW);
    digitalWrite(LED_RED3    , HIGH);
    digitalWrite(LED_BLUE2   , HIGH);
    delay(map(analogRead(POT), 0, 1023, 50, 1000));

    
    digitalWrite(LED_RED3    , LOW);
    digitalWrite(LED_BLUE2   , LOW);
    digitalWrite(LED_GREEN3  , HIGH);
    digitalWrite(LED_BLUE3   , HIGH);
    delay(map(analogRead(POT), 0, 1023, 50, 1000));
  }
}