const int pot_pin = A0;
//Analog girisler otomatikman input olarak tanimlidir
//tekrar pin Mode yazmaya gerek yoktur

int gelen_veri;
void setup() {
  Serial.begin(9600);

}

void loop() {
  gelen_veri = analogRead(pot_pin);
  Serial.print("okunan deger = ");
  Serial.println(gelen_veri);
  Serial.print("voltaj");
  Serial.println(gelen_veri*5/1023.0);
  delay(100);
}
