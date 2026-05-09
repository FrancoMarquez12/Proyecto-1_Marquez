#define RED 5
#define REDRED 3
#define GREENGREEN 1
#define GREENGREENGREEN 6
#define BLUEBLUE 2
#define BLUEBLUEBLUE 10
#define BUZZBUZZ 11

void setup()
{
  pinMode( RED , INPUT );
  pinMode( REDRED , INPUT );
  pinMode( GREENGREEN , INPUT );
  pinMode( GREENGREENGREEN , INPUT );
  pinMode( BLUEBLUE , INPUT );
  pinMode( BLUEBLUEBLUE , INPUT );
  pinMode( BLUEBLUEBLUE , INPUT );
  pinMode( BUZZBUZZ , OUTPUT );
}

void loop()
{
  analogWrite( RED, 500 );
  analogWrite( BUZZBUZZ, 0 );
  delay(1000);
  analogWrite( RED, 0 );
  delay(100);
  analogWrite( BUZZBUZZ, 100 );
  delay(100);
  analogWrite( BUZZBUZZ, 0 );
  digitalWrite( REDRED, HIGH );
  digitalWrite( BLUEBLUE, HIGH );
  delay(1000);
  digitalWrite( REDRED, LOW );
  digitalWrite( BLUEBLUE, LOW );
  analogWrite( BUZZBUZZ, 100 );
  delay(100);
  analogWrite( BUZZBUZZ, 0 );
  analogWrite( BLUEBLUEBLUE, 10 );
  analogWrite( GREENGREENGREEN, 10 );
  delay(1000);
  digitalWrite( BLUEBLUEBLUE, 0 );
  digitalWrite( GREENGREENGREEN, 0 );
  analogWrite( BUZZBUZZ, 100 );
  delay(100);
}