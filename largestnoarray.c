#include <stdio.h>

int largestno(int array[], int n);

int main(){
    int array[5] = {2,4,21,33,11};
    largestno(array, 5);
}

// int largestno(int array[], int n){
//     for(int i=0;i<n;i++){
//         if(array[i] > array[n-i-1]){
//             printf("%d",array[i]);
//         }
//     }
//     }

int largestno(int array[], int n){
    int max = array[0];   // assume first is largest

    for(int i = 1; i < n; i++){ 
        if(array[i] > max){
            max = array[i];
        }
    }

    printf("Largest = %d", max);
}

