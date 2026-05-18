#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    if (x % 2 == 0)
    printf("Divisible by 2");
    else 
    printf("Not divisible by 2");
}