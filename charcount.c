#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "AARYAN";
    char ch[] = "A";
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch[0]){
            count++;
        }
    }
    printf("%d",count);
}
