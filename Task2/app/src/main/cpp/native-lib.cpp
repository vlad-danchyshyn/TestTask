#include <jni.h>
#include <string>
#include <stdlib.h>

extern "C"
JNIEXPORT jintArray Java_com_test_task_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */, jint cellId, jintArray arr) {
    const jsize length = env->GetArrayLength(arr);
    jintArray newArray = env->NewIntArray(length);
    jint *oarr = env->GetIntArrayElements(arr, NULL);
    jint *narr = env->GetIntArrayElements(newArray, NULL);

    for (int i = 0;i < length; i++) {
        narr[i] = oarr[i];
    }

    switch(cellId){
        case 0 :
            if(oarr[1]==0){
                narr[1]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[4]==0){
                narr[4]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 1 :
            if(oarr[0]==0){
                narr[0]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[2]==0){
                narr[2]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[5]==0){
                narr[5]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 2 :
            if(oarr[1]==0){
                narr[1]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[3]==0){
                narr[3]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[6]==0){
                narr[6]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 3 :
            if(oarr[2]==0){
                narr[2]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[7]==0){
                narr[7]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 4 :
            if(oarr[0]==0){
                narr[0]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[5]==0){
                narr[5]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[8]==0){
                narr[8]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 5 :
            if(oarr[1]==0){
                narr[1]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[4]==0){
                narr[4]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[6]==0){
                narr[6]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[9]==0){
                narr[9]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 6 :
            if(oarr[2]==0){
                narr[2]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[5]==0){
                narr[5]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[7]==0){
                narr[7]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[10]==0){
                narr[10]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 7 :
            if(oarr[3]==0){
                narr[3]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[6]==0){
                narr[6]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[11]==0){
                narr[11]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 8 :
            if(oarr[4]==0){
                narr[4]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[9]==0){
                narr[9]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[12]==0){
                narr[12]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 9 :
            if(oarr[5]==0){
                narr[5]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[8]==0){
                narr[8]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[10]==0){
                narr[10]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[13]==0){
                narr[13]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 10 :
            if(oarr[6]==0){
                narr[6]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[9]==0){
                narr[9]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[11]==0){
                narr[11]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[14]==0){
                narr[14]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 11 :
            if(oarr[7]==0){
                narr[7]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[10]==0){
                narr[10]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[15]==0){
                narr[15]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 12 :
            if(oarr[8]==0){
                narr[8]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[13]==0){
                narr[13]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 13 :
            if(oarr[9]==0){
                narr[9]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[12]==0){
                narr[12]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[14]==0){
                narr[14]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 14 :
            if(oarr[10]==0){
                narr[10]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[13]==0){
                narr[13]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[15]==0){
                narr[15]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
        case 15 :
            if(oarr[11]==0){
                narr[11]=oarr[cellId];
                narr[cellId]=0;
            }
            if(oarr[14]==0){
                narr[14]=oarr[cellId];
                narr[cellId]=0;
            }
            break;
    }

    env->ReleaseIntArrayElements(newArray, narr, NULL);
    env->ReleaseIntArrayElements(arr, oarr, NULL);
    return newArray;
}
extern "C"
JNIEXPORT jboolean Java_com_test_task_MainActivity_checkWin(JNIEnv *env, jobject /* this */,jintArray arr) {
    jboolean ret = true;
    jint *oarr = env->GetIntArrayElements(arr, NULL);
    for(int i = 0;i<15;i++){
        if(oarr[i]!=i+1){
            ret = false;
        }
    }

    return ret;
}

extern "C"
JNIEXPORT jintArray Java_com_test_task_MainActivity_mix(JNIEnv *env, jobject /* this */, jintArray arr) {
    const jsize length = env->GetArrayLength(arr);
    jint *oarr = env->GetIntArrayElements(arr, NULL);
    for(int i = 0;i<length;i++){
        std::swap(oarr[i], oarr[rand() % length]);
    }
    env->ReleaseIntArrayElements(arr, oarr, NULL);
    return arr;
}

