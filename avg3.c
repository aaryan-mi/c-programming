#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &x, &y, &z);
    int avg = (x + y + z) / 3;
    printf("The average of three numbers is %d",avg);
}