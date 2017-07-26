
(cl:in-package :asdf)

(defsystem "jetbot-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Bot" :depends-on ("_package_Bot"))
    (:file "_package_Bot" :depends-on ("_package"))
    (:file "CBus" :depends-on ("_package_CBus"))
    (:file "_package_CBus" :depends-on ("_package"))
    (:file "ChassisState" :depends-on ("_package_ChassisState"))
    (:file "_package_ChassisState" :depends-on ("_package"))
    (:file "DBus" :depends-on ("_package_DBus"))
    (:file "_package_DBus" :depends-on ("_package"))
    (:file "Hcp" :depends-on ("_package_Hcp"))
    (:file "_package_Hcp" :depends-on ("_package"))
    (:file "PantiltState" :depends-on ("_package_PantiltState"))
    (:file "_package_PantiltState" :depends-on ("_package"))
    (:file "Rcp" :depends-on ("_package_Rcp"))
    (:file "_package_Rcp" :depends-on ("_package"))
    (:file "Uwb" :depends-on ("_package_Uwb"))
    (:file "_package_Uwb" :depends-on ("_package"))
    (:file "VDBus" :depends-on ("_package_VDBus"))
    (:file "_package_VDBus" :depends-on ("_package"))
    (:file "VHC" :depends-on ("_package_VHC"))
    (:file "_package_VHC" :depends-on ("_package"))
    (:file "VRC" :depends-on ("_package_VRC"))
    (:file "_package_VRC" :depends-on ("_package"))
    (:file "ZGyro" :depends-on ("_package_ZGyro"))
    (:file "_package_ZGyro" :depends-on ("_package"))
  ))