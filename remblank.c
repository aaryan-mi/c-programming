#include <stdio.h>
#include <string.h>

char removeblank(char ch []);

int main(){
    char ch [] = "AARYAN MISHRA";
    removeblank(ch);
    printf("%s",ch);
}

char removeblank(char ch[]){
    int j = 0;
    for (int i = 0; ch[i] != '\0'; i++){
        if (ch[i] != '\t' && ch[i] != ' '){
         ch[j++] = ch[i];
/*
Copies character from index i to j and increments j:
ch[j] = ch[i];
j = j + 1;
*/
        }
    }
    ch[j] = '\0';
}

