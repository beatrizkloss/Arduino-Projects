const int sensorPin = 3;
const int buttonPin = 4;
const int buzzerPin = 2;

const int ledPins[5] = {12, 11, 10, 9, 8};

const int MONITORING = 0;
const int WAITING = 1;
const int ALARM = 2;
const int WAITING_SENSOR_CLEAR = 3;

int currentState = MONITORING;

unsigned long detectionTime = 0;
unsigned long blinkTime = 0;

bool ledsOn = false;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  setLeds(LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  unsigned long currentTime = millis();

  bool objectDetected = digitalRead(sensorPin) == LOW;
  bool buttonPressed = digitalRead(buttonPin) == HIGH;

  if (currentState == MONITORING) {
    if (objectDetected) {
      detectionTime = currentTime;
      blinkTime = currentTime;

      ledsOn = true;
      setLeds(HIGH);

      currentState = WAITING;
    }
  }

  else if (currentState == WAITING) {
    if (currentTime - blinkTime >= 500) {
      blinkTime = currentTime;

      ledsOn = !ledsOn;
      setLeds(ledsOn);
    }

    if (buttonPressed) {
      setLeds(LOW);
      digitalWrite(buzzerPin, LOW);

      currentState = WAITING_SENSOR_CLEAR;
    }

    else if (currentTime - detectionTime >= 5000) {
      setLeds(HIGH);
      currentState = ALARM;
    }
  }

  else if (currentState == ALARM) {
    setLeds(HIGH);

    if (currentTime % 1000 < 30) {
      digitalWrite(buzzerPin, HIGH);
    } else {
      digitalWrite(buzzerPin, LOW);
    }

    if (buttonPressed) {
      digitalWrite(buzzerPin, LOW);
      setLeds(LOW);

      currentState = WAITING_SENSOR_CLEAR;
    }
  }

  else if (currentState == WAITING_SENSOR_CLEAR) {
    digitalWrite(buzzerPin, LOW);
    setLeds(LOW);

    if (!objectDetected && !buttonPressed) {
      currentState = MONITORING;
    }
  }
}

void setLeds(bool state) {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], state);
  }
}