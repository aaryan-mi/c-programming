#include <stdio.h>

void printno(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printno(arr,7); // Array decays to pointer to its first element (&arr[0]) 
}

void printno(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }

}

