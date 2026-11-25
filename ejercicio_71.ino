void sortDescending(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void setup() {
  Serial.begin(9600);
  int numeros[5] = {12, 45, 7, 89, 23};
  
  Serial.println("Original:");
  for(int i = 0; i < 5; i++) { 
    Serial.print(numeros[i]); 
    Serial.print(" "); 
  }
  Serial.println();

  sortDescending(numeros, 5);

  Serial.println("Ordenado de mayor a menor:");
  for(int i = 0; i < 5; i++) { 
    Serial.print(numeros[i]); 
    Serial.print(" "); 
  }
  Serial.println();
}

void loop() {
}