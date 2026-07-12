#define RED 			3
#define BLUE 			4
#define GREEN 			5
#define BOT 			2

int contador = 0;

void setup()
{
  pinMode( BOT  ,  INPUT_PULLUP );
  pinMode( RED  ,  OUTPUT );
  pinMode( BLUE ,  OUTPUT );
  pinMode( GREEN,  OUTPUT );
}

void loop() {
  
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);
  
    if (digitalRead(BOT) == LOW) {
    contador++;
    if (contador > 7) contador = 1;

    digitalWrite(RED, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);

    if (contador == 1) { digitalWrite(RED, HIGH); }        
    else if (contador == 2) { 
      digitalWrite(BLUE, HIGH); 
      digitalWrite(GREEN, HIGH); } 
    
    else if (contador == 3) { 
      digitalWrite(GREEN, HIGH); }  
    
    else if (contador == 4) { 
      digitalWrite(RED, HIGH); 
      digitalWrite(BLUE, HIGH); }  
    
    else if (contador == 5) { 
      digitalWrite(BLUE, HIGH); }    
    
    else if (contador == 6) { 
      digitalWrite(RED, HIGH); 
      digitalWrite(BLUE, HIGH); digitalWrite(GREEN, HIGH); } 
    
    else if (contador == 7) { 
      digitalWrite(RED, HIGH); 
      digitalWrite(GREEN, HIGH); }

    while (digitalRead(BOT) == LOW) {
      delay(1000); 
    }
  }
}