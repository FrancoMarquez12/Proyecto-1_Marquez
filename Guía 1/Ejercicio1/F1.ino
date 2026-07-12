#define BOT 2
#define BUZZ 3


void setup()
{
  pinMode( BOT  , INPUT_PULLUP );
  pinMode( BUZZ , OUTPUT );
}

void loop() {
  int estadoBoton = digitalRead(BOT);

  if (estadoBoton == LOW) {
    tone(BUZZ, 1000);
    delay(200);
    noTone(BUZZ);
    delay(200);
  } else {
    noTone(BUZZ);
  }
}
