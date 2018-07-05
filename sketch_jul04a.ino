double val=0;
int  PinA=2;
int PinB=3;
int ASet;
int BSet;
Servo servo;
void setup()
{
  Serial.begin(9600);
  pinMode(PinA, INPUT);
  pinMode(PinB, INPUT);
  servo.attach();

  ASet = digitalRead(PinA);
  BSet = digitalRead(PinB);   // read the input pin
 
  attachInterrupt(PinA, INCRE, CHANGE);
  attachInterrupt(PinB, DECRE, CHANGE);
}

void loop()
{
   delay(500);
  angle = val*(360/500);
  while(angle<405)
  {
    digitalWrite();
    digitalWrite();
    analogWrite();
    
    
   }
   servo.write();
  
   delay(1000); 
}

void INCRE()
{
  ASet = digitalRead(PinA) == HIGH;
  val += (ASet != BSet) ? +1 : -1;
}

void DECRE()
{
  BSet = digitalRead(PinB) == HIGH;
  val += (ASet == BSet) ? +1 : -1;
}
