#define LED_A0  A0
#define LED_A1  A1

void setup()
{
  pinMode( LED_A0 , OUTPUT );
  pinMode( LED_A1 , OUTPUT );
  pinMode( 3 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT );
  pinMode( 9 , OUTPUT );
  pinMode( 10 , OUTPUT );
  pinMode( 11 , OUTPUT );
}

void loop() {
  analogWrite( LED_A0, 0);
  analogWrite( LED_A1, 25);
  analogWrite( 3,      50);
  analogWrite( 5,      75);
  analogWrite( 6,      100);
  analogWrite( 9,      125);
  analogWrite(10,      175); 
  analogWrite(11,      255);
}
