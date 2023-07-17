#!/usr/bin/python3
# Description:
# - Subscribes to real-time streaming video from your built-in webcam.
#
# Author:
# - Wenderson Ferreira
 
# Import the necessary libraries
import rospy # Python library for ROS
from sensor_msgs.msg import Image # Image is the message type
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
import cv2 # OpenCV library
 
def callback(data):
 
  # Used to convert between ROS and OpenCV images
  br = CvBridge()
 
  # Output debugging information to the terminal
  rospy.loginfo("receiving thermal frame")
   
  # Convert ROS Image message to OpenCV image
  current_frame = br.imgmsg_to_cv2(data)
  
  # Display image
  cv2.imshow("camera", cv2.resize(current_frame, (640, 480)))
  
  filename = 'thermal_video.mp4'
  file_size = (640, 480) # Assumes 640x480 mp4
  frames_per_second = 20.0
 
  fourcc = cv2.VideoWriter_fourcc(*'mp4v')
  result = cv2.VideoWriter(filename,  
                           fourcc, 
                           frames_per_second, 
                           file_size)
  
  result.write(current_frame)
  
  cv2.waitKey(1)
      
def receive_message():
 
  # Tells rospy the name of the node.
  # Anonymous = True makes sure the node has a unique name. Random
  # numbers are added to the end of the name. 
  rospy.init_node('thermal_sub_py', anonymous=True)
   
  # Node is subscribing to the video_frames topic
  rospy.Subscriber('thermal_frames', Image, callback)
 
  # spin() simply keeps python from exiting until this node is stopped
  rospy.spin()
 
  # Close down the video stream when done
  cv2.destroyAllWindows()
  
if __name__ == '__main__':
  receive_message()