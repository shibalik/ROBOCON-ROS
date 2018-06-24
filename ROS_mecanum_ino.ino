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
      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);
      
      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);

      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);

      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);

    }
    if("RIGHT"==string.data)
    {
       analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);
      
            analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);
      
            analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);

      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);


    }
    if("LEFT"==string.data)
    {
      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);
      
       analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);

      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);

      analogWrite( ,255);
      digitalWrite( ,HIGH);
      digitalWrite( ,LOW);

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
 
