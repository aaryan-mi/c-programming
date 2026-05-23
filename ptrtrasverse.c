#include <stdio.h>
int main(){
    int aadhar[5];
    
    // input
    int *ptr = &aadhar[0]; // pointer points at 0, we then use ptr++ to make it travel till end.
    for(int i=0; i<5; i++){
        printf("%d index : ",i);
        scanf("%d",(ptr+i)); // ptr + i because we now dont want it to scan ptr which is 0, but slots next to it {inc by 4 bytes} 
        // can also use &aadhar[i] instead of ptr + i
    }

    // output
    for(int i=0; i<5; i++){
        printf("%d Index = %d\n", i, *(ptr+i));
        // other way
        printf("%d Index = %d\n", i, aadhar[i]);
    }

}

// ARRAY IS A POINTER ITSELF