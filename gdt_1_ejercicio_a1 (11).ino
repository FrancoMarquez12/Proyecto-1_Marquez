#define RED   A0
#define BLUE  A1
#define GREEN A2

void setup()
{
  pinMode( RED   , OUTPUT );
  pinMode( BLUE  , OUTPUT );
  pinMode( GREEN , OUTPUT );
}

void loop() {
  
  
  
  //CIAN:
  //cian clarito
  analogWrite(RED, 0);   
  analogWrite(BLUE, 50);  
  analogWrite(GREEN, 50);
  delay(1000);
  //cian medio
  analogWrite(RED, 0);   
  analogWrite(BLUE, 150); 
  analogWrite(GREEN, 150);
  delay(1000);
  //cian brillante
  analogWrite(RED, 0);   
  analogWrite(BLUE, 255); 
  analogWrite(GREEN, 255);
  delay(1000);

  
  
  //ROJO:
  //rojo clarito
  analogWrite(RED, 50);  
  analogWrite(BLUE, 0);   
  analogWrite(GREEN, 0);
  delay(1000);
  //rojo medio
  analogWrite(RED, 150); 
  analogWrite(BLUE, 0);   
  analogWrite(GREEN, 0);
  delay(1000);
  //rojo brillante
  analogWrite(RED, 255); 
  analogWrite(BLUE, 0);   
  analogWrite(GREEN, 0);
  delay(1000);

  
  
  //AMARILLO:
  //amarillo
  analogWrite(RED, 50);  
  analogWrite(BLUE, 0);   
  analogWrite(GREEN, 50);
  delay(1000);
  //amarillo medio
  analogWrite(RED, 150); 
  analogWrite(BLUE, 0);   
  analogWrite(GREEN, 150);
  delay(1000);
  //amarillo brillante
  analogWrite(RED, 255); 
  analogWrite(BLUE, 0);   
  analogWrite(GREEN, 255);
  delay(1000);
}