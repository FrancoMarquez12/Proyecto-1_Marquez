#define POT   A0
#define LED   3

void setup()
{
  pinMode( POT , OUTPUT );
  pinMode( LED , OUTPUT );
}

void loop() {
  
  analogWrite(3, 255);
  delay(analogRead(POT));
  
  analogWrite(3, 0);
  delay(analogRead(POT));
  
}
