#define DO  262
#define RE  294
#define MI  330
#define FA  349
#define SOL  392
#define LA  440
#define SI  497
#define DO_2 526
#define RE_2 589

const int pinBuzzer = 9;
const int pinButton = 8;

int melodia[] = {
  DO, RE, MI, FA, SOL, LA, SI, DO_2
};

void setup() {
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinButton, INPUT_PULLUP);
}

void loop() {
  // Asa Branca
  if (digitalRead(pinButton) == LOW) {
    beep(SOL);
    beep(LA);
    beep(SI);
    beep(RE_2, 500, 2);
    beep(SI);
    beep(DO_2, 500, 2);
    noTone(pinBuzzer);
    delay(300);

    beep(SOL);
    beep(LA);
    beep(SI);
    beep(RE_2, 500, 2);
    beep(DO_2);
    beep(SI);
    noTone(pinBuzzer);
    delay(300);

    beep(SOL, 500, 2);
    beep(LA);
    beep(SI);
    beep(RE_2, 500, 2);
    beep(DO_2);
    beep(SI);
    beep(SOL);
    beep(DO_2);
    noTone(pinBuzzer);
    delay(300);

    beep(SI, 500, 2);
    beep(LA, 500, 2);
    beep(SI);
    beep(LA, 500, 2);
    beep(SOL, 500, 2);
    noTone(pinBuzzer);
    delay(300);

    beep(SOL, 500, 2);
    beep(LA);
    beep(SI);
    beep(RE_2, 500, 2);
    beep(DO_2);
    beep(SI);
    beep(SOL);
    beep(DO_2);
    noTone(pinBuzzer);
    delay(300);

    beep(SI, 500, 2);
    beep(LA, 500, 2);
    beep(SI);
    beep(LA, 500, 2);
    beep(SOL, 500, 2);
    noTone(pinBuzzer);
    delay(300);
    
    noTone(pinBuzzer);
  }
}

void beep(int hertz) {
  tone(pinBuzzer, hertz);

  delay(500);

  noTone(pinBuzzer);
}

void beep(int hertz, int duration) {
  tone(pinBuzzer, hertz);

  delay(duration);

  noTone(pinBuzzer);
}

void beep(int hertz, int duration, int repeat) {
  for(int i = 0; i < repeat; i++){
    beep(hertz, duration);
  }
}
