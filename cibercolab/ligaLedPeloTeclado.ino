char incomingByte; // for incoming serial data
bool isOn = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();


    switch (incomingByte) {
      case 'A':
      if (isOn) {
        Serial.println("O LED já está ligado");
      } else {
        isOn = true;
        digitalWrite(LED_BUILTIN, HIGH);
      }
        break;
      case 'B':
        if (isOn) {
          isOn = false;
          digitalWrite(LED_BUILTIN, LOW);
        }
        digitalWrite(LED_BUILTIN, LOW);
        break;
      case 'C':
       
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(1000);                       // wait for a second
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
        delay(1000);
      default:
        Serial.println("uh oh");
        break;
    }
  }
}
