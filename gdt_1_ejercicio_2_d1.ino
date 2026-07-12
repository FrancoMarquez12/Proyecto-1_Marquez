#define POT    A2
#define RGB_GG  6
#define RGB_BB 5
#define RGB_RR 4
#define RGB_R  3
#define RGB_B  2
#define RGB_G  1

void setup()
{
  pinMode( POT , INPUT );
  pinMode( RGB_GG , OUTPUT );
  pinMode( RGB_BB , OUTPUT );
  pinMode( RGB_RR , OUTPUT );
  pinMode( RGB_R , OUTPUT );
  pinMode( RGB_B , OUTPUT );
  pinMode( RGB_G , OUTPUT );
}

void loop()
{
  digitalWrite( RGB_GG , LOW );
  digitalWrite( RGB_BB , HIGH );
  digitalWrite( RGB_RR , HIGH );
  digitalWrite( RGB_B , LOW );
  digitalWrite( RGB_R , HIGH );
  digitalWrite( RGB_G , HIGH );
  
  delay(analogRead(POT));
  
  digitalWrite( RGB_GG , HIGH );
  digitalWrite( RGB_BB , LOW );
  digitalWrite( RGB_RR , HIGH );
  digitalWrite( RGB_B , HIGH );
  digitalWrite( RGB_R , HIGH );
  digitalWrite( RGB_G , LOW );
  
  delay(analogRead(POT));
  
}