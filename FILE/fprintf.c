#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("FPRINTF.txt","w");
    int n;
    char ch[] = "AARYAN";
    for(int i = 0; ch[i] != '\0'; i++){ // i =0
    fprintf(fptr,"%c",ch[i]);}
    fclose(fptr);
}