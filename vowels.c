#include <stdio.h>
#include <string.h>

int countvowels(char ch[]);

int main(){
    char vowels[100];
    printf("Enter your characters");
    gets(vowels);
    int result = countvowels(vowels); // stored in results
    printf("Number of vowels = %d", result);

}

int countvowels(char ch[]){
    int count = 0;

    for(int i = 0; ch[i] != '\0'; i++){
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||
       ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        count++;
        }
    return count;
}
