#include <stdio.h>
int main(){
    // fgetc(fptr);
    // fputc('A',fptr);

    FILE *fptr;
    fptr = fopen("fgetc_fputc.txt","r");
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
}
