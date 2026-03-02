

int flamePin = 2;     // connect sensor D0 to Arduino pin 2
int buzzerPin = 8;    // connect buzzer + to Arduino pin 8

void setup() {
  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int flameState = digitalRead(flamePin);

  // Most flame sensors are ACTIVE LOW
  if (flameState == LOW) {
    digitalWrite(buzzerPin, HIGH);  // turn buzzer ON
  } else {
    digitalWrite(buzzerPin, LOW);   // turn buzzer OFF
  }
}