//Dijital Pinleri giris olarak kullanmak
int led = 4;
int buton = 5;
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
