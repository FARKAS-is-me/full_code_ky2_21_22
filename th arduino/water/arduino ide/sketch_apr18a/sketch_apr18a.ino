void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= 10; i++)
      pinMode(i, OUTPUT);


   Serial.begin(9600);
}


//code của Mạnh
//void loop() {
//  // put your main code here, to run repeatedly:
//  int b = 2;
//  while (b <= 10) {
//    for (int i = 10; i >= b; i--) {
//      digitalWrite(i,1);
//      delay(50);
//      if (i == b) {
//        digitalWrite(i,1);
//        delay(50);
//      } else {
//        digitalWrite(i,0);
//      }
//    }
//    b++;
//  }
//   for (int i = 10; i >=2; i--) {
//    digitalWrite(i,0);
//   }
//}




//code của Quyến
//int l = 2;
//void loop() {
//  // put your main code here, to run repeatedly:
//  if(l == 10){
//     l = 2;
//      for(int i = 10; i >= 2; i--)
//     digitalWrite(i, LOW);
//  }
//  for(int i = 10; i >= l; i--){
//     digitalWrite(i, HIGH);
//     delay(50);
//     if(i != l){
//     digitalWrite(i, LOW);
//     }
//  }
//  l++;
//}

//void loop(){
//  int x=random(2,11);
//  while(x!=0){
//    digitalWrite(x,HIGH);
//    delay(20);
//    digitalWrite(x,LOW);
//    x=random(2,11);
//  }
//  
//}



void loop(){
//     Serial.print("Gia tri dien ap la: ");
//     float volt=(float)analogRead(A0)/1024*5;
//     Serial.print(volt);
//     Serial.println("V");
//     delay(100);
//     digitalWrite(0,HIGH);
     float ratio=(float)analogRead(A0)/1023*8;
      int breakPoint=(int)ratio;
      for(int i=2;i<=breakPoint+2;i++)
        digitalWrite(i,1);
      for(int i=breakPoint+2;i<=10;i++)
        digitalWrite(i,0);
}
