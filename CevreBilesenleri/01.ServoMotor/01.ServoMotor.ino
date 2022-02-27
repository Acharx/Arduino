#include <Servo.h>

Servo MaviServo;

void setup() {
  MaviServo.attach(3);  

}

void loop() {
  for(int pos=0 ; pos<=180 ; pos+=1){
    MaviServo.write(pos);
    delay(15);
  }
  for(int pos=180 ; pos >=0 ; pos-=1){
    MaviServo.write(pos);
    delay(15);
  }

}
