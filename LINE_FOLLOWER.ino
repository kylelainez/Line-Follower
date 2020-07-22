const int IR1 = 2, IR2 = 3, ML1 = 4, ML2 = 5, MR1 = 6,MR2 = 7, ena = 9, enb = 10;

void setup() {
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(ML1,OUTPUT);
  pinMode(ML2,OUTPUT);
  pinMode(MR1,OUTPUT);
  pinMode(MR2,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
}

void loop() {
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW);
  digitalWrite(MR1,HIGH);
  digitalWrite(MR2,LOW);
  int IRL = digitalRead(IR1);
  int IRR = digitalRead(IR2);
  if(IRL == LOW && IRR == HIGH){
     ena = 50;
     enb = 255;
  } else if(IRL == HIGH && IRR == LOW){
     ena = 255;
     enb = 50;
  } else if(IRL == HIGH && IRR == HIGH){
     ena = 150;
     enb = 150;
  } else if(IRL == LOW && IRR == LOW){
     ena = 0;
     enb = 0;
  }
}
