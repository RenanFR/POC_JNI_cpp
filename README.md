g++ -c -fPIC -IC:/Dev/Java/jdk17.0.6_10/include -IC:/Dev/Java/jdk17.0.6_10/include/win32 native.cpp -o native.o

g++ -shared -o native.dll native.o

javac -h . Native.java