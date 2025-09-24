#define TX_2 17
#define RX_2 16

char incomingByte;
String remetente;
String destinatario;


void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, RX_2, TX_2);
}

void loop() {
  if (Serial.available() > 0) {
    //incomingByte = Serial.read();
    Serial2.print("Nicolas: ");
    remetente = Serial.readStringUntil('\n');
    Serial2.println(remetente);
  }

  if (Serial2.available() > 0) {
    //incomingByte = Serial2.read();
    Serial.print("Matheus: ");
    destinatario = Serial2.readStringUntil('\n');
    Serial.println(destinatario);
  }
}
