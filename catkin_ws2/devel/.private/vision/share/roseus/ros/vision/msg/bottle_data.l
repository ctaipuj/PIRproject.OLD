;; Auto-generated. Do not edit!


(when (boundp 'vision::bottle_data)
  (if (not (find-package "VISION"))
    (make-package "VISION"))
  (shadow 'bottle_data (find-package "VISION")))
(unless (find-package "VISION::BOTTLE_DATA")
  (make-package "VISION::BOTTLE_DATA"))

(in-package "ROS")
;;//! \htmlinclude bottle_data.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass vision::bottle_data
  :super ros::object
  :slots (_P _height _width _type ))

(defmethod vision::bottle_data
  (:init
   (&key
    ((:P __P) (instance geometry_msgs::PoseStamped :init))
    ((:height __height) 0.0)
    ((:width __width) 0.0)
    ((:type __type) 0)
    )
   (send-super :init)
   (setq _P __P)
   (setq _height (float __height))
   (setq _width (float __width))
   (setq _type (round __type))
   self)
  (:P
   (&rest __P)
   (if (keywordp (car __P))
       (send* _P __P)
     (progn
       (if __P (setq _P (car __P)))
       _P)))
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseStamped _P
    (send _P :serialization-length)
    ;; float64 _height
    8
    ;; float64 _width
    8
    ;; int32 _type
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseStamped _P
       (send _P :serialize s)
     ;; float64 _height
       (sys::poke _height (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _width
       (sys::poke _width (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int32 _type
       (write-long _type s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseStamped _P
     (send _P :deserialize buf ptr-) (incf ptr- (send _P :serialization-length))
   ;; float64 _height
     (setq _height (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _width
     (setq _width (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int32 _type
     (setq _type (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get vision::bottle_data :md5sum-) "781d2aa33ab4e61c17d06f9478782f3d")
(setf (get vision::bottle_data :datatype-) "vision/bottle_data")
(setf (get vision::bottle_data :definition-)
      "geometry_msgs/PoseStamped P
float64 height
float64 width
int32 type

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :vision/bottle_data "781d2aa33ab4e61c17d06f9478782f3d")


