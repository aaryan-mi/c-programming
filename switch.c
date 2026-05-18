#include <stdio.h>
int main ()
{
    int x;
    printf("Enter Your Number :");
    scanf("%d",&x);

    switch(x){
        case 1 : printf("ONE");
        break;
        case 2 : printf("TWO");
        break;
        default : printf("NO Idea what youve entered");
    }
}