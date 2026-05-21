#include <stdio.h>
int temp(n);

int main(){
    int n;
    printf("Enter your temperature range :");
    scanf("%d",&n);
    printf("%c",temp(n));
    return 0;

}

int temp(n){
    if(n>=50){
        printf("Hot");
    } if(n<=20){
        printf("Cold");
    } 

}