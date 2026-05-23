#include <stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++; // int is 4 bytes, increments address by 4
    printf("ptr = %u\n",ptr);
    ptr--; // decrements address by 4
    printf("ptr = %u\n",ptr);

    float a = 22.00;
    float *ptrr = &a;
    printf("ptr = %u\n",ptrr);
    ptrr++; // float is 4 bytes, increments address by 4
    printf("ptr = %u\n",ptrr);
    ptrr--; // decrements address by 4
    printf("ptr = %u\n",ptrr);

    char ch = 'G';
    char *ptrrr = &ch;
    printf("ptr = %u\n",ptrrr);
    ptrrr++; // char is 1 byte, increments address by 1
    printf("ptr = %u\n",ptrr);
    ptrrr--; // decrements address by 1
    printf("ptr = %u\n",ptrrr);
     
}