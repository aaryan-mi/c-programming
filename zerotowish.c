#include <stdio.h>
int main ()
{
    int i=0,n;
    printf("Enter numbers upto where you wanna print\n");
    scanf("%d",&n);

    while(i<=n){
    printf("%d\n",i);
    i++;
    }
}