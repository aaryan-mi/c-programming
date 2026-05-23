#include <stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference = %u\n",ptr-_ptr); /* Difference gives number of elements of this type between pointers */
    _ptr = &age; // to compare two pointers we had their values same
    printf("Comparison = %u\n",ptr == _ptr); // true
}

// ptrs of same type can be subtracted