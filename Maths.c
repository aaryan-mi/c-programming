#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter Number A\n");
    scanf("%d",&a);
    printf("Enter Number B\n");
    scanf("%d",&b);

    printf("Addition : %d\n", a + b);
    printf("Subtraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division : %d\n", a / b);
    printf("Modulus or Remainder : %d\n", a % b);

}