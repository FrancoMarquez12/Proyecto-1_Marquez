bool isMultiple(int a, int b) {
  if (b == 0) return false;
  return (a % b == 0);
}

void setup() {
  Serial.begin(9600);
  int num1 = 15;
  int num2 = 3;
  
  Serial.print(num1);
  Serial.print(" es multiplo de ");
  Serial.print(num2);
  Serial.print("? ");
  
  if (isMultiple(num1, num2)) {
    Serial.println("SI");
  } else {
    Serial.println("NO");
  }
}

void loop() {
}