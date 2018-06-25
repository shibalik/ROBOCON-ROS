#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include <WProgram.h>
#endif

#include <ros.h>
#include <std_msgs/String.h>



ros:: NodeHandle nh;

void mecanum_cb(const std_msgs::String& string){
    if("STRAIGHT"==string.data)
    {
      analogWrite( 5,255);
      digitalWrite( 28,HIGH);
      digitalWrite( 29,LOW);
      
      analogWrite( 4,255);
      digitalWrite( 26,HIGH);
      digitalWrite( 27,LOW);

      analogWrite( 3,255);
      digitalWrite( 24,HIGH);
      digitalWrite( 25,LOW);

      analogWrite( 2,255);
      digitalWrite( 22,HIGH);
      digitalWrite( 23,LOW);

    }
    if("RIGHT"==string.data)
    {
             analogWrite( 5,255);
      digitalWrite( 28,HIGH);
      digitalWrite( 29,LOW);
      
      analogWrite( 4,255);
      digitalWrite( 26,LOW);
      digitalWrite( 27,HIGH);

      analogWrite( 3,255);
      digitalWrite( 24,HIGH);
      digitalWrite( 25,LOW);

      analogWrite( 2,255);
      digitalWrite( 22,LOW);
      digitalWrite( 23,HIGH);


    }
    if("LEFT"==string.data)
    {
            analogWrite( 5,255);
      digitalWrite( 28,LOW);
      digitalWrite( 29,HIGH);
      
      analogWrite( 4,255);
      digitalWrite( 26,HIGH);
      digitalWrite( 27,LOW);

      analogWrite( 3,255);
      digitalWrite( 24,LOW);
      digitalWrite( 25,HIGH);

      analogWrite( 2,255);
      digitalWrite( 22,HIGH);
      digitalWrite( 23,LOW);
    }
} 

ros:: Subscriber<std_msgs::String>sub("instruction", mecanum_cb);

void setup()
{
  pinMode(
 
  nh.initNode();
  nh.subscribe(sub);
}

void loop(){
  nh.spinOnce();
  delay(1);
}
