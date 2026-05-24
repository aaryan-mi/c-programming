#include <stdio.h> 

void dowork(char ch[]); // no need to pass no. of elements because we already know it would end at \0

int main(){
    char first[] = "AARYAN";
    char second[] = "MISHRA";
    dowork(first); // no need to pass size of string
    dowork(second);
}

void dowork(char ch[]){
    for(int i=0; ch[i] != '\0'; i++){
        printf("%c",ch[i]);
    }
    printf("\n");
}