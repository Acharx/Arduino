int buton1 = 2;
int buton2 = 3;
int sayac=1;
void setup() {
  pinMode(buton1,INPUT);
  pinMode(buton2,INPUT);
  Serial.begin(9600);
}

void loop() {
  if( digitalRead(buton1) == HIGH && digitalRead(buton2)==LOW ){
    if(sayac<5){
      sayac=sayac+1;
    }
    
  }else if( digitalRead(buton2) == HIGH && digitalRead(buton1=LOW) ){
    if(sayac>0){
      sayac=sayac-1;
    }
  }else if( digitalRead(buton1)== HIGH && digitalRead(buton2) == HIGH ){
    Serial.println("Tanimsiz islem!!!...");
  }else{
    Serial.println("Butonlara basilmadi");
  }

  switch(sayac){
    case 0:
    Serial.println("Deger 0");
    break;

    case 1:
    Serial.println("Deger 1");
    break;

    case 2:
    Serial.println("Deger 2");
    break;

    case 3:
    Serial.println("Deger 3");
    break;

    case 4:
    Serial.println("Deger 4");
    break;

    case 5:
    Serial.println("Deger 5");
    break;

    default:
    Serial.println("Tanimsiz");
    break;
  }


}
