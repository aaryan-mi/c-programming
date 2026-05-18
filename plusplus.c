#include <stdio.h>

int main()
{
    int i = 1;
    printf("%d\n",i++); //Here i would be printed as 1 and 2 will be updated internally
    printf("%d\n",i); //Two should be the output

    int a = 1;
    printf("%d\n",++a); //That means here first the number will be updated and then would be displayed , i.e 2
    printf("%d\n",a); 

}