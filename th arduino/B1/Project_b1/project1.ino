
void setup() {
  // put your setup code here, to run once:
for(int i=0; i<=8; i++){
  pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 1; i<=8; i++){
    digitalWrite(i, 1);
  }
  delay(1000);
   for(int i = 1; i<=8; i++){
    digitalWrite(i, 0);
  }
  delay(1000);

}
