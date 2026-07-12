#define Led_O 6
#define Led_W 5
#define Led_G 4
#define Led_Y 3
#define Led_R 2

void setup()
{
  pinMode( 2 , OUTPUT );
  pinMode( 3 , OUTPUT );
  pinMode( 4 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT );
}
void loop()
{
  digitalWrite( Led_G , LOW );
  digitalWrite( Led_Y , LOW );
  digitalWrite( Led_O , LOW );
  digitalWrite( Led_R , HIGH );
  digitalWrite( Led_W , HIGH );
  delay(1000);
  digitalWrite( Led_R , LOW );
  digitalWrite( Led_Y , HIGH );
  digitalWrite( Led_W , LOW );
  digitalWrite( Led_O , HIGH );
  delay(1000);
  digitalWrite( Led_Y , LOW );
  digitalWrite( Led_G , HIGH );
  delay(1000);
  digitalWrite( Led_G , LOW );
  digitalWrite( Led_Y , HIGH );
  delay(1000);
}
