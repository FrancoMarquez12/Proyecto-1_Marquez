#define Led_GG 7
#define Led_BB 6
#define Led_RR 5
#define Led_G 4
#define Led_B 3
#define Led_R 2
void setup()
{
  pinMode( Led_G , OUTPUT);
  pinMode( Led_B , OUTPUT);
  pinMode( Led_BB , OUTPUT);
  pinMode( Led_R , OUTPUT);
  pinMode( Led_GG , OUTPUT);
  pinMode( Led_RR , OUTPUT);
}

void loop()
{
  digitalWrite( Led_G , LOW );
  digitalWrite( Led_B , LOW );
  digitalWrite( Led_R , HIGH );
  delay( 1000 );
  digitalWrite( Led_R , LOW );
  digitalWrite( Led_G , HIGH );
  digitalWrite( Led_B , HIGH );
  delay( 1000 );
  digitalWrite( Led_R , LOW );
  digitalWrite( Led_G , HIGH );
  digitalWrite( Led_B , LOW );
  delay( 1000 );
  digitalWrite( Led_R , HIGH );
  digitalWrite( Led_G , LOW );
  digitalWrite( Led_B , HIGH );
  delay( 1000 );
  digitalWrite( Led_R , HIGH );
  digitalWrite( Led_G , HIGH );
  digitalWrite( Led_B , HIGH );
  delay( 1000 );
  digitalWrite( Led_R , HIGH );
  digitalWrite( Led_G , HIGH );
  digitalWrite( Led_B , LOW );
  delay( 1000 );
  digitalWrite( Led_R , LOW );
  digitalWrite( Led_G , LOW );
  digitalWrite( Led_B , LOW );
  delay( 1000 );
  digitalWrite( Led_GG , LOW );
  digitalWrite( Led_BB , LOW );
  digitalWrite( Led_RR , HIGH );
  delay( 1000 );
  digitalWrite( Led_RR , LOW );
  digitalWrite( Led_GG , HIGH );
  digitalWrite( Led_BB , HIGH );
  delay( 1000 );
  digitalWrite( Led_RR , LOW );
  digitalWrite( Led_GG , HIGH );
  digitalWrite( Led_BB , LOW );
  delay( 1000 );
  digitalWrite( Led_RR , HIGH );
  digitalWrite( Led_GG , LOW );
  digitalWrite( Led_BB , HIGH );
  delay( 1000 );
  digitalWrite( Led_RR , HIGH );
  digitalWrite( Led_GG , HIGH );
  digitalWrite( Led_BB , HIGH );
  delay( 1000 );
  digitalWrite( Led_RR , HIGH );
  digitalWrite( Led_GG , HIGH );
  digitalWrite( Led_BB , LOW );
  delay( 1000 );
  digitalWrite( Led_RR , LOW );
  digitalWrite( Led_GG , LOW );
  digitalWrite( Led_BB , LOW );
  delay( 1000 );
}