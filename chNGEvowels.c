#include <stdio.h>
#include <string.h>

void lowercase(char ch[]);

int main(){
    char ch[] = "aaryan";
    lowercase(ch);
    puts(ch);
}

void lowercase(char ch[]){
    for(int i = 0; ch[i] != '\0'; i++){
        if (ch[i] =='a'){
            ch[i] = 'A'; // no ==
        } else if(ch[i] == 'e'){
            ch[i] = 'E';
        } else if(ch[i] == 'i'){
            ch[i] = 'I';
        } else if(ch[i] == 'o'){
            ch[i] = 'O';
        } else if(ch[i] == 'u'){
            ch[i] = 'U';
        } //else {
            // continue checking next characters
        }
    }
