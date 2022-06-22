void setup() {
  // put your setup code here, to run once:
  for(int i=1;i<9;i++)
    pinMode(i,OUTPUT);
}


////B1
//void loop() {
//  // put your main code here, to run repeatedly:
//  for(int i = 1; i<9; i++){
//    digitalWrite(i, 1);
//  }
//  delay(1000);
//   for(int i = 1; i<9; i++){
//    digitalWrite(i, 0);
//  }
//  delay(1000);
//}


////B2
//void loop() {
//  // put your main code here, to run repeatedly:
//  for(int i = 1; i<9; i++){
//    digitalWrite(i, HIGH);
//    delay(100);
//  }
//   for(int i = 8; i>=1; i--){
//    digitalWrite(i, LOW);
//    delay(100);
//  }
//  
//}


////B3
//void loop(){
//  for(int i=0;i<9;i++){
//    digitalWrite(i,HIGH);
//    delay(100);
//    digitalWrite(i,LOW);
//  }
//  for(int i=8;i>=1;i--){
//    digitalWrite(i,HIGH);
//    delay(100);
//    digitalWrite(i,LOW);
//  }
//}


//B4(water)
void loop(){
  int l=8;
  if(l == 1){
     l = 8;
      for(int i = 1; i <= 8; i++)
     digitalWrite(i, LOW);
  }
  for(int i = 1; i <= l; i++){
     digitalWrite(i, HIGH);
     delay(100);
     if(i != l){
     digitalWrite(i, LOW);
     }
  }
  l--;  
}
