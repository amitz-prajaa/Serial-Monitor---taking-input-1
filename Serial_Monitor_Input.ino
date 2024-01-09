int led = 10 ;
int led2 = 11 ;
void setup() {
  // put your setup code here, to run once:
      Serial.begin(9600);

      pinMode(led , OUTPUT);
      pinMode(led2 , OUTPUT);
}


void loop(){
  while(Serial.available()!= led && Serial.available()!= led2 ){
//    Serial.println("In while loop");
 }
  int num = Serial.parseInt();
  for(int i=0 ; i<num ; i++){
    digitalWrite(led , 1);
    delay(1000);
    digitalWrite(led , 0);
    delay(1000);
  }
}
