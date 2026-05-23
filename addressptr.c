#include <stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    //printf("%p\n",&age);
    printf("%u\n",&age); // address at age

    //printf("%p\n",ptr);
    printf("%u\n",ptr); // ptr stores the address of age

    //printf("%p\n",&ptr);
    printf("%u\n",&ptr); // address of the pointer variable itself

    printf("%d\n",age); // age = 22
    printf("%d\n",*ptr); // dereferencing ptr gives value at address of age (22)
    printf("%d\n",*(&age)); // value at address of age




}