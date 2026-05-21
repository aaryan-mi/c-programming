#include <stdio.h>
void printtable(int n);

int main(){
    int n;
    printf("Enter your number");
    scanf("%d",&n);

    printtable(n); //actual parameter because it has values which would be passed to formal parameters or //calling stmt
    // we call n as argument here
}

void printtable(int n){ // here fn has int n which is empty and would take values frm calling stmt
    // n is parameter here
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}