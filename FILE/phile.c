#include <stdio.h>
int main(){
    FILE *fptr;  // can declare ptr, pt, fp, ur wish
    fptr = fopen("test.txt","r"); // ptr name = fopen("file name","mode");
    /*
    r - read
    rb - read in binary // for r and rb, if file doesnt exist, null will be stored in ptr
    w - write //removes any old written data too, hence use append if u need old data too
    rw - write in binary // creates file if it does not exist
    a - append
    */
    fclose(fptr); // close file to release allocated system resources
    return 0;
}

