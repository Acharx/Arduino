//  Input = 1028 Cozunurluk
// Output = 255  Cozunurluk
//Senkronize edilmelidir. mapping islemi

const int pot_pin = A0;
const int buzzer = 11;

int durum = 0;
int cikti = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
durum = analogRead(pot_pin);
Serial.println(durum);
cikti = map(durum, 0 , 1023, 0 , 255);
// map(1 , 2 , 3 , 4 , 5);
// 1 => sonucun atanacagi degisken
// 2 => eski formatin en kucuk degeri
// 3 => eski formatin en buyuk degeri
// 4 => yeni formatin en kucuk degeri
// 5 => yeni formatin en buyuk degeri

analogWrite(buzzer, cikti);

}
