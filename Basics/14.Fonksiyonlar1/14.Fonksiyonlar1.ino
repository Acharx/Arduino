//4 Fonksiyon Tipi
//1.Parametre almayan ve deger dondurmeyen
//2.Parametre almayan ve deger donduren
//3.Parametre alan ve deger dondurmeyen
//4.Parametnre alan ve deger donduren

void fonksiyon1(){
  Serial.println("fonksiyon basladi ");
  delay(250);
  Serial.println("Fonksiyon calismaya devam ediyor");
  delay(250);
  Serial.println("Fonksiyon birazdan bitecek..");
  delay(250);
}

void setup() {
  Serial.begin(9600);

}

void loop() {
  fonksiyon1();

}
