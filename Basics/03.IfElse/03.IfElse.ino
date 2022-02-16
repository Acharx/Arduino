int buton1 = 8;
int buton2 = 9;
int buton3 = 10;
int buton4 = 11;

int led1 = 2;
int led2 = 3;
int led3 = 4;

int b1,b2,b3,b4;

void setup() {
  pinMode(buton1,INPUT);
  pinMode(buton2,INPUT);
  pinMode(buton3,INPUT);
  pinMode(buton4,INPUT);
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
}

void loop() {
  b1 = digitalRead(buton1);
  b2 = digitalRead(buton2);
  b3 = digitalRead(buton3);
  b4 = digitalRead(buton4);

  if(b1 == HIGH){
    digitalWrite(led1,HIGH);
    delay(250);
    digitalWrite(led1,LOW);
    delay(250);
  }else if(b2 == HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    delay(250);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(250);
  }else if(b3 == HIGH){
    digitalWrite(led1,HIGH);
    delay(250);
    digitalWrite(led2,HIGH);
    delay(250);
    digitalWrite(led3,HIGH);
    delay(250);
    digitalWrite(led1,LOW);
    delay(250);
    digitalWrite(led2,LOW);
    delay(250);
    digitalWrite(led3,LOW);
    delay(250);
  }else if(b4 == HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    delay(250);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(250);
   }else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
   }
  

}
