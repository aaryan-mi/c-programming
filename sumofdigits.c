#include <stdio.h>
int digitsum(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", digitsum(n));
    return 0;
}

int digitsum(int n){
    if(n==0){
        return 0;
    }
    return (n%10) + digitsum(n/10); 
}

/*
sumDigits(123)
= 3 + sumDigits(12)

sumDigits(12)
= 2 + sumDigits(1)

sumDigits(1)
= 1 + sumDigits(0)

sumDigits(0)
= 0   ← base case (STOP)
*/