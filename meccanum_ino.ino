 int pinR[]={9,10,11,5};
 int pindr1[]={0,1,2,3};
 int pindr2[]={4,6,7,8};

void setup(){
	pinMode(pinR,OUTPUT);
	pinMode(pindr1,OUTPUT);
	pinMode(pindr2,OUTPUT);
	
}

void loop(){
    delay(500);
    analogWrite(pinR[0],255);
    digitalWrite(pindr1[0],HIGH);
    digitalWrite(pindr2[0],LOW);


    analogWrite(pinR[1],255);
    digitalWrite(pindr1[1],HIGH);
    digitalWrite(pindr2[1],LOW);

    analogWrite(pinR[2],255);
    digitalWrite(pindr1[2],HIGH);
    digitalWrite(pindr2[2],LOW);


        analogWrite(pinR[0],255);
    digitalWrite(pindr1[3],HIGH);
    digitalWrite(pindr2[3],LOW);

        analogWrite(pinR[4],255);
    digitalWrite(pindr1[4],HIGH);
    digitalWrite(pindr2[4],LOW);

    delay(5000);

    analogWrite(pinR[0],255);
    digitalWrite(pindr1[0],HIGH);
    digitalWrite(pindr2[0],LOW);


    analogWrite(pinR[1],255);
    digitalWrite(pindr1[1],LOW);
    digitalWrite(pindr2[1],HIGH);

    analogWrite(pinR[2],255);
    digitalWrite(pindr1[2],HIGH);
    digitalWrite(pindr2[2],LOW);


        analogWrite(pinR[0],255);
    digitalWrite(pindr1[3],HIGH);
    digitalWrite(pindr2[3],LOW);

        analogWrite(pinR[4],255);
    digitalWrite(pindr1[4],LOW);
    digitalWrite(pindr2[4],HIGH);

    break;
}
