#include <stdio.h>
int main()
{
    int x;
    printf("Enter your marks :");
    scanf("%d",&x);

    if (x < 30)
    printf("C");
    else if (x >= 30 && x < 70)
    printf("B");
    else if (x >= 70 && x < 90)
    printf("A");
    else if (x >= 90 && x <=100)
    printf("A+");
    else
    printf("Invalid Marks");
}