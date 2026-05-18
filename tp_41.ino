#define TMP    A1
#define LDR    A0
#define RGB_R  3
#define RGB_G  6
#define RGB_B  5

#define MostrarTMP
#define MostrarLDR

void setup()
{
  pinMode( LDR , INPUT );
  pinMode( TMP , INPUT );
  pinMode( RGB_R , OUTPUT );
  pinMode( RGB_G , OUTPUT );
  pinMode( RGB_B , OUTPUT );
  
  Serial.begin(9600);
}

void loop()
{
  
  float temperature = (analogRead(TMP)*5.0/1024)*100-50;
  #ifdef MostrarTMP
    Serial.println("temperatura actual: ");
    Serial.print( temperature );
    Serial.println("c");
  #endif
  
  delay(2000);
 
  int luz = analogRead( LDR );//1-310
  //map( valor , min, max, newMin, newMax )
  int nuevaLuz = map( luz , 1 , 310 , 100 , 0 );
  #ifdef MostrarLDR
    Serial.println("Nivel de luz actual: ");
    Serial.println( nuevaLuz );
  #endif

    if( (luz) = 100 )
  {
	   if( (temperature) > 70 )
  {
    digitalWrite(RGB_R  , HIGH);
  }
  if( (temperature) < 18 )
  {
    digitalWrite(RGB_B  , HIGH);
  }
  if( (temperature) < 70 && (temperature) > 18 )
  {
    digitalWrite(RGB_G  , HIGH);
  }
      }else {
      digitalWrite(RGB_R  , LOW);
  digitalWrite(RGB_G  , LOW);
  digitalWrite(RGB_B  , LOW);
  }
}