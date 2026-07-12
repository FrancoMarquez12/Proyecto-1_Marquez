#define LED_R 2
#define LED_G 3
#define BUZZ 5

void setup()
{
  pinMode( LED_R , OUTPUT );
  pinMode( LED_G , OUTPUT );
  pinMode( BUZZ , OUTPUT );
}
void loop()
{
  delay(1000);
  digitalWrite( LED_R , HIGH  );
  digitalWrite( LED_G , LOW  );
  digitalWrite( BUZZ  , HIGH  );

  delay(1000);
  
  digitalWrite( LED_R , LOW  );
  digitalWrite( LED_G , HIGH  );
  digitalWrite( BUZZ  , LOW  );
}
