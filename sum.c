#include <stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter numbers upto where you wanna print its sum");
    scanf("%d",&n);
    do{
       // sum calculation
        sum = sum + i;
        i++;
    } while (i<=n);

     printf("The sum is %d",sum);
}