void setup() {
  Serial.begin(115200); // Any baud rate should work
  Serial.println("Hello Arduino\n");
}

void loop() {
  while (Serial.available() == 0) {
    Serial.println("Hello Arduino");
    delay(1000);
  }

  int value = Serial.parseInt();

  if(value > 0)
  {
    Serial.print("Number: ");
    Serial.print(value);
    Serial.print(", hex: ");
    Serial.print(value, HEX);
    Serial.print(", bin: ");
    Serial.println(value, BIN);
  }
}