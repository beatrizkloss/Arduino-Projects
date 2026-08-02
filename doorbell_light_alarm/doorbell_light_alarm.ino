
const int buttonPin = 4;
const int buzzerPin = 3;

const int ledRed = 10; 
const int ledGreen = 9;


void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(buzzerPin, LOW);

}

void loop() {

  bool botao = digitalRead(buttonPin) == HIGH;

  if (botao) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
 
}
