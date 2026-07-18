int Pinldr = A5;
int ledPins[] = {13, 12, 11, 10, 9};
int ldrValue = 0; 


void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600); 
}

void loop() {
  ldrValue = analogRead(Pinldr); 

  if(ldrValue>= 800){
    for (int i = 0; i < 5; i++) {
     digitalWrite(ledPins[i], HIGH);
  }

  }else {
    for (int i = 0; i < 5; i++) {
     digitalWrite(ledPins[i], LOW);
  }
  }
  Serial.println(ldrValue);
  delay(100);

} 