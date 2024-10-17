// Pin 13 has an LED connected on most Arduino boards
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(1000); // 1 second
  digitalWrite(ledPin, LOW); // Turn the LED off
  delay(1000); // 1 second
}
