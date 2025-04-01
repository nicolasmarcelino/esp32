int LED = 2;
int BTN = 23;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(BTN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (digitalRead(BTN) == LOW) {
    digitalWrite(LED, HIGH);
    Serial.println("LED ligado!");
  } else {
    digitalWrite(LED, LOW);
  }
}
