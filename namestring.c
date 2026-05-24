#include <stdio.h>
int main(){
    char name[10];
    printf("Enter your name :");
    scanf("%s",name); // no need of &name because array name represents base address
    printf("%s",name); // spaces added = end it and doesnt print hence we use puts or gets
}