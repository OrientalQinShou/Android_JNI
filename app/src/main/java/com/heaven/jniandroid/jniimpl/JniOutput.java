package com.heaven.jniandroid.jniimpl;

/**
 * 项目名称：JNIAndroid
 * 类名：com.heaven.jniandroid.jniimpl
 * 创建人：Heaven.li
 * 创建时间：2019-11-14 15:57
 * 备注：
 */
public class JniOutput {

    static {
        System.loadLibrary("native-lib");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public static native String stringJNI();
}
