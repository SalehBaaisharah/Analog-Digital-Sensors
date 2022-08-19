const int ledPin = 10; // digital pin 10

const int ldrPin = A0; // analog pin A0

void setup() {

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 90) {

digitalWrite(ledPin, LOW);


} else {

digitalWrite(ledPin, HIGH);

}

}
