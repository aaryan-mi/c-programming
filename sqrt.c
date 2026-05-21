#include <stdio.h>
#include <math.h>

double squareroot(double n);

int main(){
    int n;
    printf("Enter a number whose square root you want : ");
    scanf("%d",&n);
    printf("Square root is : %f",squareroot(n));
    return 0;
}

double squareroot(double n){
    return sqrt(n);
}