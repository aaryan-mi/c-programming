#include <stdio.h>

int sum(int a, int b);

int main(){
    int a,b; /* we need to declare it before we use, 
    the one declared abv is only for sum function and cannot be used here,
     also variables can be same it wont make any difference */
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);

    int s = sum(a,b); //passed values of a and b to the sum function

    printf("The sum is %d",s);
}

int sum(int a, int b) {
    return a + b; /* One must know the return type
    for example int returns a integer value
    so even if we add return 12; it wont make any difference 
    however it would be logically wrong because sum of any 2 number may not always be 12 */
}