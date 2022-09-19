Only files that need to be edited are kept in this repository


Solutions to common errors.
Need to download Android/Sdk/
  ANDROID_HOME=/home/kushal/Android/Sdk/
  ANDROID_SDK_ROOT=$HOME/Android/Sdk
  export PATH=$PATH:$ANDROID_SDK_ROOT/emulator
  export PATH=$PATH:$ANDROID_SDK_ROOT/platform-tools

Also make sure to set android/local.properties

General discription of directory structure.
andorid/app/src/main/java/com/reactapp/ -> java class where we create a package and include our go package(as a c library)
andorid/app/src/main/cpp/ -> interface to call c function from java
android/app/build.gradle -> add CMakeLists for cpp folder

This should cover it all
