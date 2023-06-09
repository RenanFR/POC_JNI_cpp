package com.example;

public class Native {
    public native int addNumbers(int a, int b);

    static {
        System.loadLibrary("native"); // Load the native library
    }

    public static void main(String[] args) {
        Native nativeObj = new Native();
        int sum = nativeObj.addNumbers(5, 7);
        System.out.println("Sum: " + sum);
    }
}
