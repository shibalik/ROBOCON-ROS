import rospy
import std_msgs.msg import String

def instruction():

	pub=rospy.Publisher('instruction',String,queue_size=10)
	rospy.init_node('instruction', anonymous=True)

	X=input('please give instruction')
	pub.publish(X)


if __name__ == '__main__':
	try:
		instruction()
    except rospy.ROSInterruptException:
    	pass
