int button = 6;
int buttonValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  Serial.begin(9600); // this is the BAUD rate (number of bits of data sent every second) 
  Serial.println("Hello World!");

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValue = digitalRead(button)
  if (digitalRead(button) == HIGH) {
    Serial.println("The button has been pressed");
    Serial.println(buttonValue); // will print 0 when button is not pressed, and will pressed 1 when it is pressed
    delay(400);
  }

}
