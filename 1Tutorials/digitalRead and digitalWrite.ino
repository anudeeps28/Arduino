void setup() { // any code in here runs once when we turn ON the arduino
  // put your setup code here, to run once:
 
  // a better way to do this
  int button = 1;
  int led = 11;

  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

}

void loop() { // loops repeatedly after we have turned the arduino ON; this is the main body of the code
  // put your main code here, to run repeatedly:
  int led = 11;
  digitalRead(12);

  digitalWrite(led, HIGH);
  delay(1000); // 1 second delay
  digitalWrite(led, LOW);
  delay(1000);
}
