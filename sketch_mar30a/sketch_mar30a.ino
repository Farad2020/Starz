
int redLed = 8;
void setup() {
  pinMode(redLed,  OUTPUT);
}

void loop() {
    digitalWrite(redLed,  HIGH);
    delay(900);
    digitalWrite(redLed,  LOW);
    delay(200);
    digitalWrite(redLed,  HIGH);
    delay(900);
    digitalWrite(redLed,  LOW);
    delay(200);
}
