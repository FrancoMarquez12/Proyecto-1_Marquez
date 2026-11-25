#define Fb3 185
#define G3  196
#define F3  175
#define Cb4 277
#define Gb3 208
#define A3  220
#define E4  330
#define C4  262
#define Ab3 233

#define ARRAY_LEN(array) (sizeof(array) / sizeof(array[0]))

const int midi1[28][3] = {
 {Fb3, 136, 0},
 {G3, 136, 0},
 {F3, 136, 136},
 {G3, 136, 0},
 {Fb3, 136, 0},
 {Cb4, 136, 136},
 {G3, 136, 0},
 {Gb3, 136, 273},
 {Gb3, 136, 0},
 {G3, 136, 273},
 {Gb3, 136, 0},
 {A3, 136, 273},
 {A3, 136, 0},
 {F3, 136, 273},
 {Gb3, 136, 0},
 {A3, 136, 273},
 {A3, 136, 0},
 {Gb3, 136, 0},
 {E4, 136, 0},
 {Gb3, 136, 0},
 {A3, 136, 273},
 {A3, 136, 0},
 {C4, 136, 273},
 {A3, 136, 0},
 {Ab3, 136, 136},
 {A3, 136, 0},
 {A3, 136, 0},
 {A3, 136, 0},
};

const int buzzerPin = 2;

void playMidi(int pin, const int notes[][3], size_t len){
  for (size_t i = 0; i < len; i++) {
    tone(pin, notes[i][0]);
    delay(notes[i][1]);
    noTone(pin);
    delay(notes[i][2]);
  }
}

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  playMidi(buzzerPin, midi1, ARRAY_LEN(midi1));
  delay(3000); 
}
