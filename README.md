javac -h . FootballChant.java

g++ -c -fPIC -IC:/Dev/Java/jdk17.0.6_10/include -IC:/Dev/Java/jdk17.0.6_10/include/win32 chants_provider.cpp -o chants_provider.o

g++ -shared -o chants_provider.dll chants_provider.o