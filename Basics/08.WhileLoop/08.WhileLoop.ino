int a=0;
void setup() {
  Serial.begin(9600);

}

void loop() {

  while(a < 50){
    Serial.println(a);
    a=a+1;
  }



}
