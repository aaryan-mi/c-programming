#include <stdio.h>

int manytimes(int array[], int n);

int main(){
    int array[] = {25,25,23,25,36,48};
    int result = manytimes(array, 6);
    printf("Count = %d\n", result);
}

int manytimes(int array[], int n){
    int count = 0;
    int value = 25;
    for(int i=0;i<n;i++){
        if(array[i] == value)
        count++;
        }

    return count;
    }


/* Alternative version: taking x as parameter 
#include <stdio.h>

int manytimes(int array[], int n, int x);

int main(){
    int array[] = {25,25,23,25,36,48};
    int x = 25;

    int result = manytimes(array, 6, x);
    printf("Number %d repeated %d times", x, result);

    return 0;
}

int manytimes(int array[], int n, int x){
    int count = 0;

    for(int i=0;i<n;i++){
        if(array[i] == x){
            count++;
        }
    }

    return count;
}*/



/* IF USER WANTS TO ENTER ARRAY HIMSELF
#include <stdio.h>

int manytimes(int array[], int n, int x);

int main(){
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];   // dynamic size (VLA)

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int x;
    printf("Enter number to count: ");
    scanf("%d", &x);

    int result = manytimes(array, n, x);

    printf("%d is repeated %d times\n", x, result);

    return 0;
}

int manytimes(int array[], int n, int x){
    int count = 0;

    for(int i = 0; i < n; i++){
        if(array[i] == x){
            count++;
        }
    }

    return count;
}
    */