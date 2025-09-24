#define TX_2 17
#define RX_2 16

char incomingByte;

void setup() {
  Serial.begin(9600);
  pinMode(TX_2, INPUT);
  pinMode(RX_2, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
  }
}
