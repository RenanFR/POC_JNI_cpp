package com.gmail.renanfr1047;

public class FootballChant {
    public native String chant(String teamName);

    static {
        System.loadLibrary("chants_provider"); // Load the native library
    }

    public static void main(String[] args) {
        FootballChant footballChant = new FootballChant();
        String arsenalChant = footballChant.chant("Arsenal");
        String corinthiansChant = footballChant.chant("Corinthians");
        System.out.println(arsenalChant);
        System.out.println(corinthiansChant);
    }
}
