void setup() {
  // put your setup code here, to run once:
for(int i=0; i<=8; i++){
  pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 8; i>=1; i--){
    for(int j=0; j<=i; j++){
      digitalWrite(j, 1);
      delay(100);
      digitalWrite(j,0);   
      }
      digitalWrite(i,1);
    }
   for(int i=0; i<=8; i++){
      digitalWrite(i, 0);
    }
}
