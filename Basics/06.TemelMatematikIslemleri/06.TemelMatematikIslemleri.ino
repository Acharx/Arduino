int x = 25000;
int y = 25000;
int mutlak = abs(-747);
int ustel = pow(2,5);  //2^5=32
int sonuc;
unsigned int sonucLong;


void setup() {
  Serial.begin(9600);
}

void loop() {
  sonuc = x + y;
  sonucLong = x + y;
  Serial.println(sonuc);
  //Sonuc int degerinin kapasitesini astigi icin negatif 
  Serial.println(sonucLong);
  //Sonuc unsigned int degerinin kapasitesini asmadigi için dogru sonuc
  Serial.println(mutlak);
  Serial.println(ustel);
  delay(5000);
}
