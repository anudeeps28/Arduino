// Documentation: https://www.craft.do/s/PF6TEUm9T52wUE

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
  if (digitalRead(buttonR) == HIGH || digitalRead(buttonL) == HIGH) {
    digitalWrite(blue, HIGH);
  } else {
    digitalWrite(blue, LOW);
  }
}

