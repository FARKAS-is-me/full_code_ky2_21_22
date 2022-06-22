int button=13;

void setup() {
  // put your setup code here, to run once:

  pinMode(button,INPUT_PULLUP);
  
  for(int i=0;i<6;i++)
    pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   for(int i=0;i<6;i++){
    digitalWrite(i,!digitalRead(button));
   }
     
  
}


//code b2
void hieu_ung(int x){
  if (x == 1){
     for(int i = 2; i < 10; i++)
         digitalWrite(i,HIGH);
     delay(100);
     for(int i = 2; i < 10; i++)
         digitalWrite(i,LOW);
     delay(100); 
     
  }else if (x == 2){
      for(int i = 2; i < 10; i++){
          digitalWrite(i, HIGH);
          delay(100);
      }
      for(int i = 9; i > 1; i--){
          digitalWrite(i, LOW);
          delay(100);
      }
  }else{
       for(int i = 2; i < 10; i++){
          digitalWrite(i, HIGH);
          delay(200);
          digitalWrite(i, LOW);
       }
       for(int i = 8; i > 2; i--){
           digitalWrite(i, HIGH);
           delay(100);
           digitalWrite(i, LOW);
       }
   }
}

void clear(){
  for(int i = 2; i < 10 ; i++){
     digitalWrite(i, LOW);
  }
}
//void loop() {
//  // put your main code here, to run repeatedly:
//    if(!digitalRead(13)== 1){
//      delay(100);
//      clear();
////      delay(100);
//      button++;
//    }
//     if(button >= 4)
//       button = 1;
//     hieu_ung(button);
//}
