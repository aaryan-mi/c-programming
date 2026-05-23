#include <stdio.h>
int main(){
    int age = 22; // age defined as 22
    int *ptr = &age; 
    /* * means value at address
    & means address of
    
    so we assigned a integer pointer and stored address of age*/
    int _age = *ptr; 
    /* here, we now made _age a new variable
    and we now assigned value at address which is stored at pointer */

    printf("%d",_age);

}

/*
int *ptr
char *ptr
float *ptr
*/