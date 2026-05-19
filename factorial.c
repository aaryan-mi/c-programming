#include <stdio.h>
int main()
{
    int i,n;
    int fact = 1;
    printf("Enter a number to calculate factorial");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact = fact * i;
    }
     printf("%d",fact);
}