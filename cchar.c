#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char ch;
    int i = 0; // tracks index
    while(ch != '\n') // read input until newline character (Enter)
    {
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0'; // append null terminator since %c does not do it automatically 
    puts(str);
}