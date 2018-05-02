
(cl:in-package :asdf)

(defsystem "vision-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "bottle_data" :depends-on ("_package_bottle_data"))
    (:file "_package_bottle_data" :depends-on ("_package"))
  ))