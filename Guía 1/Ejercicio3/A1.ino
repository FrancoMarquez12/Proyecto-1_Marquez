#define GREEN   3
#define WHITE   5
#define BUZZ    6

void setup()
{
  pinMode( GREEN , OUTPUT );
  pinMode( WHITE , OUTPUT );
  pinMode( BUZZ  , OUTPUT );
}

void loop() {
  
  digitalWrite(GREEN, HIGH); 
  digitalWrite(WHITE, LOW);
  analogWrite(BUZZ, 120);
  delay(150);
  
  digitalWrite(GREEN, LOW);
  analogWrite(BUZZ, 0);
  delay(100);
  
  digitalWrite(GREEN, HIGH);
  analogWrite(BUZZ, 120);
  delay(150);

  digitalWrite(GREEN, LOW); 
  digitalWrite(WHITE, HIGH);
  analogWrite(BUZZ, 120);     
  delay(150);
  
  digitalWrite(GREEN, LOW);
  analogWrite(BUZZ, 0);       
  delay(100);
  
  digitalWrite(GREEN, HIGH);
  analogWrite(BUZZ, 120);     
  delay(150);
  
}
