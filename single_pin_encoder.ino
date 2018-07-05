int pinA=2;
int pwm,dr1,dr2;
int enc_cnt;
float angle;

void setup()
{
  pinMode(pinA,INPUT);
  attachInterrupt(pinA,counter,CHANGE);
}

void loop(){

 while(angle<405)
  {
    digitalWrite(dr1,HIGH);
    digitalWrite(dr2,LOW);
    analogWrite(pwm,255);
  }
  
  //servo functions

}

void counter(){
  ++enc_cnt;
}
