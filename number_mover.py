#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
pi=3.14
angular_speed=6
linear_speed=2
def number_mover():
    rospy.init_node('number_mover', anonymous=True)
    pub=rospy.Publisher('/turtle1/cmd_vel', Twist, queue_size=10)
    vel_msg =Twist()
  

    print("please enter a number")
 
    n =int(input("input a number here:"))
 
    if n==1 :
       vel_msg.angular.z = abs(angular_speed) 
       t0 = rospy.Time.now().to_sec()
       current_angle = 0

    while(current_angle < pi/3):
        pub.publish(vel_msg)
        t1 = rospy.Time.now().to_sec()
        current_angle = angular_speed*(t1-t0)


    vel_msg.angular.z = 0
    pub.publish(vel_msg)
    
    vel_msg.linear.x=2
   
    t0 = rospy.Time.now().to_sec()
    current_angle = 0

    while(current_angle < 8):
        pub.publish(vel_msg)
        t1 = rospy.Time.now().to_sec()
        current_angle = 2*(t1-t0)
    vel_msg.linear.x = 0
    pub.publish(vel_msg)
    rospy.spin()


if __name__ == '__main__':
    try:
        # Testing our function
        number_mover()
    except rospy.ROSInterruptException:
        pass
