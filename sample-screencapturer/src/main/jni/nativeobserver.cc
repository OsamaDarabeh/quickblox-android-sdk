#include <jni.h>
#include "talk/media/base/videocapturer.h"




/*namespace webrtc_jni {

        class ScreenCapturer : public cricket::VideoCapturer {

        }*/

                JNIEXPORT void JNICALL
                Java_com_quickblox_screencapturer_sharing_ScreenCapturer_NativeObserver_nativeCapturerStarted(
                        JNIEnv *env, jobject instance, jlong nativeCapturer, jboolean success) {


                }

                JNIEXPORT void JNICALL
                Java_com_quickblox_screencapturer_sharing_ScreenCapturer_NativeObserver_nativeOnFrameCaptured(
                        JNIEnv *env, jobject instance, jlong nativeCapturer, jbyteArray data_,
                        jint width,
                        jint height, jint rotation, jlong timeStamp) {
                        jbyte *data = (*env)->GetByteArrayElements(env, data_, 0);


                        (*env)->ReleaseByteArrayElements(env, data_, data, 0);
                }

                JNIEXPORT void JNICALL
                Java_com_quickblox_screencapturer_sharing_ScreenCapturer_NativeObserver_nativeOnOutputFormatRequest(
                        JNIEnv *env, jobject instance, jlong nativeCapturer, jint width,
                        jint height, jint fps) {

                        // TODO

                }
/*
}*/

