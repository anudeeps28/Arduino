int led = 6 // this pin has to be one of the PWM pins

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, 255); // this is equivallent to writing digitalWrite(led, HIGH);
  delay(500);
  analogWrite(led, 200);
  delay(500);
  analogWrite(led, 150);
  delay(500);
  analogWrite(led, 100);
  delay(500);
  analogWrite(led, 50);
  delay(500);
  analogWrite(led, 0); // this is equivallent to writing digitalWrite(led, LOW);
  delay(500);

}
