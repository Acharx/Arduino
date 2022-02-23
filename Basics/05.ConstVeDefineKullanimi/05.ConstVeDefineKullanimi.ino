void setup() {
  const int buton = 3;
  // Const = degismesini istemedigimiz degiskenlerin basinda kullaniriz
  //ilerleyen satirlarda degisken degeri degistirilemez.
  int sayac = 3200;

  #define wait_ms 1000
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello world!");
  delay(wait_ms);
  Serial.println("12345");
  delay(wait_ms);
}
