#include <stdio.h>
#include <string.h>

int main(){
    char aa[] = "AARYAN";
    char bb[] = "MISHRA";
    strcpy(aa,bb); // copy contents of bb into aa
    puts(aa);
    puts(bb);
    char cc[] = "AARYAN";
    char dd[] = "MISHRA";
    strcat(cc,dd); // concatenate dd to cc (ensure cc has sufficient space)
    puts(cc);
    char ee[] = "AARYAN";
    char ff[] = "MISHRA";
    strcmp(ee,ff); // comparison based on ASCII character values
    printf("%d\n",strcmp(ee,ff)); //-1
    printf("%d\n",strcmp(ff,ee)); //+1
}