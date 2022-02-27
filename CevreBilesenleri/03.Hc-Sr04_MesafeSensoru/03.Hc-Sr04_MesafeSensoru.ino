const int trigger_pin = 5;
const int echo_pin = 2;

int sure;
int mesafe;

void setup() {
  
  pinMode(trigger_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigger_pin,HIGH);
  delayMicroseconds(1000);  //1 Milisaniye
  digitalWrite(trigger_pin,LOW);

  sure =pulseIn(echo_pin,HIGH);
  /*
   * PulseIn verilen pini takibe alir
   * echo_pin HIGH olunca bir kronometre calisir
   * low duruma gelince kronometre durur
   * saydigi sayiyi sure adli degiskene kaydeder.
   */
  mesafe = (sure/2) / 29.1; //Sesin hizini hesaplayan formul
/*
 * Bu formulde odanin sicakligi ile birlikte ses dalgasinin hizi hesaplanir
 * formule o sekilde entegre edilmelidir. Fakat egitim amacli oldugundan
 * herhangi bir olcum ve hesap yapilmamistir.Sensorden okunan veriler dogru olmayabilir.
 * 
 */
  
  Serial.print("cisme olan uzaklık");
  Serial.println(mesafe);
  Serial.println("----------");
  delay(25);
}
