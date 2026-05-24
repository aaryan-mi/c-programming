// #include <stdio.h>
// int main(){
//     int array[5];
//     printf("Enter your numbers one by one : ");
//     scanf("%d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4]);

//     int i;
//     // for(int i = array[0]; i<=array[4]; i++){
//     //     printf("%d",i);
//     // }

//     if(array[5]%2==0){
//         printf("%d",array);
//     }
// }

#include <stdio.h>

int countodd(int array[], int n); // ALWAYS PASS THE SIZE OF THE ARRAY

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,23,252,25,2,5,52,4};
    printf("%d",countodd(array,16));
}

int countodd(int array[], int n){
    int count = 0; //Initializing
    for (int i=0; i<n ; i++){
        if(array[i] % 2 != 0){
            count++;
        }
    }
    return count;
}