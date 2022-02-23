int a=10;
int b=10;
int c=20;
int d=30;

bool OneTimeWork = true;
void setup() {
  Serial.begin(9600);

}

void loop() {

  if(OneTimeWork){
        if( (a==b) || (a!=b) ){
        Serial.println("Veya mantik baglaci");
        }
        if( (a==b) && (b!=c) ){
        Serial.println("Ve mantik baglaci");  
        }
        if( (a==b) && (c<d) ){
        Serial.println("Kosul saglandi...");  
        }
        
   Serial.println("Islem bitmistir...");
   OneTimeWork=false; 
  }
  

}
