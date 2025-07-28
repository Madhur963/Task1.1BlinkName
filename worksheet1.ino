const int b = 2; 

void setup() {
  pinMode(b, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void blinkName() {
  // M (--)
  dash(); dash(); delay(600);

  // A (.-)
  dot(); dash(); delay(600);

  // D (-..)
  dash(); dot(); dot(); delay(600);

  // H (....)
  dot(); dot(); dot(); dot(); delay(600);

  // U (..-)
  dot(); dot(); dash(); delay(600);

  // R (.-.)
  dot(); dash(); dot(); delay(600);
}

void loop() {
  if (digitalRead(b) == LOW) {
    blinkName();
    delay(2000);
  }
}