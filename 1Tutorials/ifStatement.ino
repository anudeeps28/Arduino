int button = 7;
int led = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH) { // digitalRead returns either a HIGH or a LOw
    digitalWrite(led, HIGH); // digitalWrite used to write either HIGH or LOW
} else {
  digitalWrite(led, LOW);
}
