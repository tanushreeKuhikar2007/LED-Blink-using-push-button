#define led 7
#define button 2

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {

  bool x = digitalRead(button);

  if (x == 1) {

    digitalWrite(led, HIGH);
    delay(500);

    digitalWrite(led, LOW);
    delay(500);

  } else {

    digitalWrite(led, LOW);

  }
}