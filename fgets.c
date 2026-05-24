#include <stdio.h>
int main(){
   // fgets(str, n, file); FORMAT OF FGETS
   // stops at n-1 input
    char str[100];
    fgets(str,100,stdin);
    puts(str); // prints next line too

    return 0;
}