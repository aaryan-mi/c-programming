#include <stdio.h>
void printHW(int n);

int main(){
    printHW(7);
}

void printHW(int n){
    if (n==0){
        return;
    }
    printf("Hello world\n");
    printHW(n-1); //recursion
}