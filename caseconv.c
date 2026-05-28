#include <stdio.h>
#include <string.h>

void viceverca(char ch []);

int main(){
    char ch[] = "aarYAn miShrA";
    viceverca(ch);
    printf("%s",ch);
}

void viceverca(char ch []){
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            ch[i] = ch[i] - 32; // a to A diff is 32
        } else if(ch[i] >= 'A' && ch[i] <= 'Z'){
            ch[i] = ch[i] + 32; // A to a diff is 32
        }
    }
}