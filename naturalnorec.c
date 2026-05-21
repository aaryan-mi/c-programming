#include <stdio.h>

int naturalno(int n);

int main(){
    printf("Sum is %d",naturalno(5));
    return 0;
}

int naturalno(int n){
    if(n == 0){
        return 0;
    }
   int sum = n + naturalno(n-1);
    return sum;
}

