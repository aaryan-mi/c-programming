#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    if (x>y)
    printf("%d is the greater than %d",x,y);
    else
    printf("%d is smaller than %d",x,y);
}