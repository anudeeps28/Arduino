// Documentation: https://www.craft.do/s/tKqEl7x9L7y5JW

int buttonL = 6;
int buttonR = 7;

int redL = 1;
int redR = 2;
int blue = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonL, INPUT);
  pinMode(buttonR, INPUT);

  pinMode(redL, OUTPUT);
  pinMode(redR, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonL == HIGH) && digitalRead(buttonR) == HIGH) {
    digitalWrite(blue, HIGH);
  } else {
    digitalWrite(blue, LOW);
  }

  if (digitalRead(buttonL) == HIGH && digitalRead(buttonR) == LOW) {
    digitalWrite(redL, HIGH);
  } else {
    digitalWrite(redL, LOW;)
  }

  if (digitalRead(buttonL) == LOW && digitalRead(buttonR) == HIGH) {
    digitalWrite(redR, HIGH);
  } else {
    digitalWrite(redR, LOW);
  }

}
