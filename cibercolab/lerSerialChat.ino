#define TX_2 17
#define RX_2 16

char incomingByte;

void setup() {
  Serial.begin(9600);
  Serial2.begin(9600);
  pinMode(TX_2, OUTPUT);
  pinMode(RX_2, INPUT);
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.println(incomingByte);
  }

  if (Serial2.available() > 0) {
    incomingByte = Serial.read();
    Serial.print(incomingByte);
  }
}
