//Dijital Pinleri giris olarak kullanmak
int led = 5;
int buton = 10;
int butondurum;

void setup() {
  pinMode(led,OUTPUT);
  //pinMode(5,OUTPUT);
  pinMode(buton, INPUT);

}

void loop() {
  butondurum = digitalRead(buton);
  if(butondurum == HIGH)
    digitalWrite(led,HIGH);
  else{
    digitalWrite(led,LOW);
  }
}
