#include <stdio.h>
#include <math.h>

int power(int m, int n);

int main(){
    int m,n;
    printf("Enter your number : ");
    scanf("%d",&m);
    printf("Enter your power : ");
    scanf("%d",&n);
    
    printf("Your results : %d",power(m,n));
}

int power(int m, int n){

    return pow(m,n);
    return 0;
}