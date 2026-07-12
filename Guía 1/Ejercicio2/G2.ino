#define POT   A0
#define BUZZ   3

void setup()
{
  pinMode( POT , OUTPUT );
  pinMode( BUZZ , OUTPUT );
}

void loop() {
  
  tone(BUZZ, analogRead(POT)); 
  
  delay(100);
  
}
