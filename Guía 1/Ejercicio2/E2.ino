#define POT    A2
#define POTPOT A1
#define POTPOTPOT A0
#define RGB_R  10
#define RGB_B  9
#define RGB_G  6

int valor;
int valorvalor;
int valorvalorvalor;

void setup()
{
  pinMode( POT , INPUT );
  pinMode( POTPOT , INPUT );
  pinMode( POTPOTPOT , INPUT );
  pinMode( RGB_R , POT );
  pinMode( RGB_G , POTPOT );
  pinMode( RGB_B , POTPOTPOT );
  
}

void loop()
{
  valor = analogRead(POT);
  valorvalor = analogRead(POTPOT);
  valorvalorvalor = analogRead(POTPOTPOT);
  
    int valorGREEN = map(valor,0,1023,0,255);
  analogWrite( RGB_G, valorGREEN );

    int valorRED = map(valorvalor,0,1023,0,255);
  analogWrite( RGB_R, valorRED );

    int valorBLUE = map(valorvalorvalor,0,1023,0,255);
  analogWrite( RGB_B, valorBLUE );
  
}
