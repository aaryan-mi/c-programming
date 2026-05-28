#include <stdio.h>
#include <string.h>

char highfreq(char ch[]);

int main(){
    char ch[] = "AARYAN";
    printf("%c",highfreq(ch));
}

char highfreq(char ch[]){
    int max = 0;
    int freq[256] = {0}; // store frequency // 256 for all ascii values to be stored  // means -> int freq[256] = {0, 0, 0, 0, 0, ..., 0};
    char result; // store results
    for(int i = 0; ch[i] != '\0'; i++){
        freq[ch[i]]++;
/* Character frequency count:
   Uses ASCII value of character as index and increments count */

        if(freq[ch[i]] > max){
            max = freq[ch[i]];
            result = ch[i];
        }
    }
    return result;
}

