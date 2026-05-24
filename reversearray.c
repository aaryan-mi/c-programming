#include <stdio.h>

int reverse(int array[], int n);
int Printarray(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5};
    reverse(array,5);
    Printarray(array, 5);
}

int Printarray(int array[], int n){
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
    }
}
int reverse(int array[], int n){
    for(int i=0; i<n/2; i++){
        int first = array[i]; // first value // i is value from start, n is total size of index
        int second = array[n-i-1]; // second value
        array[i] = second;
        array[n-i-1] = first;
    }
}

// CALL BY REFERENCE
// ARRAY IS A POINTER


/*
Array indexing:
For size n, valid indices are 0 to n-1.
First element: index 0
Last element: index n-1
*/