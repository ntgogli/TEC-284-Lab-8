
//This code simulates a stop light, and when a button is pressed the light stays green till the button is let go. - Nathan Goglin

int button = 2;
int red = 7;
int yellow = 6;
int green = 5;

void setup() {

pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
pinMode(button, INPUT_PULLUP);
}

void loop() {

if (digitalRead(button) == LOW) {
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
  }
  else {

    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(3000);

    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(1000);

    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(3000);

    digitalWrite(red, LOW);
  }
}
