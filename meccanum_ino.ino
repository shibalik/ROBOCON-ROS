
void setup(){
	pinMode(5,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(2,OUTPUT);

        pinMode(22,OUTPUT);
        pinMode(23,OUTPUT);
        
        pinMode(24,OUTPUT);
        pinMode(25,OUTPUT);
        
        pinMode(26,OUTPUT);
        pinMode(27,OUTPUT);
        
        pinMode(28,OUTPUT);
        pinMode(29,OUTPUT);

}

void loop(){
    delay(500);
    analogWrite(5,255);
    digitalWrite(28,HIGH);
    digitalWrite(29,LOW);


    analogWrite(4,255);
    digitalWrite(26,HIGH);
    digitalWrite(27,LOW);

    analogWrite(3,255);
    digitalWrite(24,HIGH);
    digitalWrite(25,LOW);


        analogWrite(2,255);
    digitalWrite(22,HIGH);
    digitalWrite(23,LOW);

        

    delay(5000);

    analogWrite(5,255);
    digitalWrite(28,HIGH);
    digitalWrite(29,LOW);


    analogWrite(4,255);
    digitalWrite(26,LOW);
    digitalWrite(27,HIGH);

    analogWrite(3,255);
    digitalWrite(24,HIGH);
    digitalWrite(25,LOW);


        analogWrite(2,255);
    digitalWrite(22,LOW);
    digitalWrite(23,HIGH);
    delay(5000);
}
