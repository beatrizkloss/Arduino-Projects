const int buttonPin = 2; 
int ledPins[] = {13, 12, 11, 10, 9};

int buttonState = 0; 

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH){
    for (int i = 0; i < 5; i++) {
     digitalWrite(ledPins[i], HIGH);
  }

  }else {
    for (int i = 0; i < 5; i++) {
     digitalWrite(ledPins[i], LOW);
  }
  }

} 