#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NEWW.txt","r");
    if(fptr == NULL){ // fopen returns NULL if file does not exist
        printf("File does not exist\n");
    } else{
        fclose(fptr);
    }
}