int rPin = 11;
int gPin = 9;
int bPin = 10;

const int potPin = A0;

void setup() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void setColor(int red, int green, int blue) {
  analogWrite(rPin, red);
  analogWrite(gPin, green);
  analogWrite(bPin, blue);
}

void loop() {
  int value = analogRead(potPin);

  if (value <= 340) {
    setColor(0, 0, 255);
  }
  else if (value <= 640) {
    setColor(0, 255, 0);
  }
  else {
    setColor(255, 0, 0);
  }
}
