#define BTN_1 23
#define BTN_2 22

int right_flag = 0;

int left_flag = 0;

void setup() {
  Serial.begin(115200);
  pinMode(BTN_1, INPUT_PULLUP); // right
  pinMode(BTN_2, INPUT_PULLUP); // left
}

void loop() {
  if (digitalRead(BTN_1) == LOW && right_flag == 0) {
    Serial.println("Right");
    right_flag = 1;
  }

  if (digitalRead(BTN_1) == HIGH && right_flag == 1) {
    Serial.println("Right was released");
    right_flag = 0;
  }

  if (digitalRead(BTN_2) == LOW && left_flag == 0) {
    Serial.println("Left");
    left_flag = 1;
  }

  if (digitalRead(BTN_2) == HIGH && left_flag == 1) {
    Serial.println("Left was released");
    left_flag = 0;
  }
}
