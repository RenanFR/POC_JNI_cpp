#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL Java_com_gmail_renanfr1047_FootballChant_chant(JNIEnv* env, jobject obj, jstring teamName) {
    const char* team = env->GetStringUTFChars(teamName, nullptr);

    std::string chant;
    if (std::string(team) == "Arsenal") {
        chant = "We Love You Arsenal";
    } else if (std::string(team) == "Corinthians") {
        chant = "Vai Corinthians!";
    } else {
        chant = "Unknown team chant...";
    }

    env->ReleaseStringUTFChars(teamName, team);

    return env->NewStringUTF(chant.c_str());
}
