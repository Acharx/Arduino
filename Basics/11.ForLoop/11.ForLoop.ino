int led1 = 2;
int led2 = 3;
int led3 = 4;

void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  for(int x=1;x<10;x++){
   digitalWrite(led1,HIGH);
   delay(100);
   

   if(x%2==0){
    digitalWrite(led2,HIGH);
    delay(100);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
   }else if(x%2==1){
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led1,LOW);
    digitalWrite(led3,LOW);
   }
   
  }
  Serial.println("Void Loop Dongusu Bitmistir...");
}
