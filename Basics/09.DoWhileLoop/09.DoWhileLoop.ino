int a=0;
void setup() {

  Serial.begin(9600);

}

void loop() {
  Serial.println("Loop basliyor...");
  Serial.println(a);
   
  do
  {
  a = a+1;
  Serial.println(a);
  Serial.println("Dongu calisiyor");
  delay(250); 
  }
  while(a <= 50);
  {
    Serial.println("a 50'den buyuktur, donguden cikilmistir...");
    Serial.println("Loop dongusu bitti");
  }

}
