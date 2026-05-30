#include <stdio.h>
int main(){
    // fscanf(file ptr name, "%format specifier", address);
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("%c",ch);
    fscanf(fptr, "%c", &ch);
    printf("%c",ch);
    fscanf(fptr, "%c", &ch);
    printf("%c",ch);
    fscanf(fptr, "%c", &ch);
    printf("%c",ch);
    fscanf(fptr, "%c", &ch);
    printf("%c",ch);
    fclose(fptr);
}