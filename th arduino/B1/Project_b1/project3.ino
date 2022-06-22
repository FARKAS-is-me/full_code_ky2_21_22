void setup() {
  // put your setup code here, to run once:
  for(int i=1; i<=8; i++){
    pinMode(i, OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=1; i<=8; i++){  
  digitalWrite(i,1);
  delay(100);
  digitalWrite(i,0);
}
for(int j=8; j>=1; j--){  
  digitalWrite(j,1);
  delay(100);
  digitalWrite(j,0);
}
}
