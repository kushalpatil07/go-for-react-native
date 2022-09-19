#ANDROID_OUT=/home/kushal/StudioProjects/MyApplication/app/src/main/jniLibs
ANDROID_OUT=/home/kushal/Desktop/nimbleedge/react-native/reactApp/android/app/src/main/jniLibs
NDK_BIN=/home/kushal/Downloads/android-ndk-r25b/toolchains/llvm/prebuilt/linux-x86_64/bin

android-armv7a:
	CGO_ENABLED=1 \
	GOOS=android \
	GOARCH=arm \
	GOARM=7 \
	CC=$(NDK_BIN)/armv7a-linux-androideabi21-clang \
	go build -buildmode=c-shared -o $(ANDROID_OUT)/armeabi-v7a/libfoo.so ./cmd/libfoo
	cp ./cmd/libfoo/jx.h $(ANDROID_OUT)/armeabi-v7a/

android-arm64:
	CGO_ENABLED=1 \
	GOOS=android \
	GOARCH=arm64 \
	CC=$(NDK_BIN)/aarch64-linux-android21-clang \
	go build -buildmode=c-shared -o $(ANDROID_OUT)/arm64-v8a/libfoo.so ./cmd/libfoo
	cp ./cmd/libfoo/jx.h $(ANDROID_OUT)/arm64-v8a/

android-x86:
	CGO_ENABLED=1 \
	GOOS=android \
	GOARCH=386 \
	CC=$(NDK_BIN)/i686-linux-android21-clang \
	go build -buildmode=c-shared -o $(ANDROID_OUT)/x86/libfoo.so ./cmd/libfoo
	cp ./cmd/libfoo/jx.h $(ANDROID_OUT)/x86/

android-x86_64:
	CGO_ENABLED=1 \
	GOOS=android \
	GOARCH=amd64 \
	CC=$(NDK_BIN)/x86_64-linux-android21-clang \
	go build -buildmode=c-shared -o $(ANDROID_OUT)/x86_64/libfoo.so ./cmd/libfoo
	cp ./cmd/libfoo/jx.h $(ANDROID_OUT)/x86_64/

android: android-armv7a android-arm64 android-x86 android-x86_64
