const int pot_pin = A0; 

int pot_val;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pot_val = analogRead(pot_pin);
  Serial.println(pot_val);
  delay(20);

}
