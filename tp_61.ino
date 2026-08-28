#define TMP A0
#define VENT 3
#define PIR 2
#define LUZ 4

#define MostrarTMP

void setup()
{
  pinMode (TMP, INPUT);
  pinMode (PIR, INPUT);
  pinMode (LUZ, OUTPUT);
  pinMode (VENT, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float temperatura = (analogRead(TMP)*5.0/1024)*100-50;
  #ifdef MostrarTMP
    Serial.print("temperatura actual: ");
    Serial.print( temperatura );
    Serial.println("c");
  #endif

  int TEMP = map(temperatura, 15, 50, 50, 255);
      TEMP = constrain(TEMP, 50, 255);
      analogWrite(VENT, TEMP);
  
  int sensor = digitalRead(PIR);

  if (sensor == LOW){
    digitalWrite(LUZ, HIGH);
  } 
  else{
    digitalWrite(LUZ, LOW);
  }
  
  
  if (TEMP > 50) 
  {
    analogWrite(VENT, 255);
  } 
  
  if (sensor == LOW && TEMP < 50.0) 
  {
    if (TEMP == 30.0){
    analogWrite(VENT, 150);
    }
    if (TEMP < 15.0) 
    {
      analogWrite(VENT, 50);
    } 
    else 
    {
  } 
    analogWrite(VENT, 0);
  }
  delay(200);
}







