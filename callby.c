#include <stdio.h>
void square(int n);
void _square(int* n);

int main(){
    int number = 4;
    square(number);
    printf("%d\n",number); // call by value: original variable unchanged
    _square(&number);
    printf("%d\n",number); // call by reference: original variable modified via pointer

}

void square(int n){ // call by value: receives a copy of the argument
    n = n*n;
    printf("%d\n",n);
}

void _square(int* n){ // call by reference: receives the address of the argument
    *n = (*n) * (*n);
    printf("%d\n",*n);
}

