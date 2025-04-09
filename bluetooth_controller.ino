#include <BleKeyboard.h>

BleKeyboard bleKeyboard("ESP32 NICK AND JP", "Espressif", 100);

#define BTN_1 23
#define BTN_2 22
#define BTN_3 21

int right_flag = 0;

int left_flag = 0;

void setup() {
  Serial.begin(115200);
  pinMode(BTN_1, INPUT_PULLUP); // right
  pinMode(BTN_2, INPUT_PULLUP); // left
  pinMode(BTN_3, INPUT_PULLUP); // up
  bleKeyboard.begin();
}



void loop() {
  if (digitalRead(BTN_1) == LOW) {
    Serial.println("Direita");
    if (bleKeyboard.isConnected()) {
      bleKeyboard.press(KEY_RIGHT_ARROW);
      delay(100);
      bleKeyboard.release(KEY_RIGHT_ARROW);
      }
  }

  if (digitalRead(BTN_2) == LOW) {
    Serial.println("Esquerda");
    if (bleKeyboard.isConnected()) {
      bleKeyboard.press(KEY_LEFT_ARROW);
      delay(100);
      bleKeyboard.release(KEY_LEFT_ARROW);
      }
  }

  if (digitalRead(BTN_3) == LOW) {
    Serial.println("Pulo");
    if (bleKeyboard.isConnected()) {
      bleKeyboard.press(KEY_UP_ARROW);
      delay(100);
      bleKeyboard.release(KEY_UP_ARROW);
      }
  }

}
