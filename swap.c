#include <stdio.h>
void swap(int a, int b); // call by reference doesnot swap values at main
void _swap(int *a, int *b); // call by reference swaps value at main

int main(){
    int x = 4,y = 9;
    swap(x,y);
    printf("Still lets check after swapping x is %d and y is %d\n",x,y); // a and b not changed because it was call by value

    _swap(&x,&y); // x, y would pass values, but in call by reference we deal with address so &x &y will come
    printf("Lets check after swapping does it also gets swapped, x is %d and y is %d\n",x,y);
}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("After swapping a is %d and b is %d\n",a,b);
}

void _swap(int *a, int *b){
    int t = *a; // temporary variable to hold integer value
    *a = *b;
    *b = t;
    printf("After swapping a is %d and b is %d\n",*a,*b);
}