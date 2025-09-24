#define TX_2 17
#define RX_2 16

char incomingByte;

void setup() {
  Serial.begin(9600);                            // USB serial (PC)
  Serial2.begin(9600, SERIAL_8N1, RX_2, TX_2);   // Serial2 with custom pins
}

void loop() {
  // Forward from PC to the other ESP
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial2.write(incomingByte);     // send to other ESP
  }

  // Forward from the other ESP to PC
  if (Serial2.available() > 0) {
    incomingByte = Serial2.read();
    Serial.write(incomingByte);      // show on PC
  }
}
