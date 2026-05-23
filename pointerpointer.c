#include <stdio.h>
int main(){
    /*
    pointer to pointer is used to store address of a pointer
    
    int **pptr;
    char **pptr;
    float **pptr;
    
    */
   float price = 100.00;
   float *ptr = &price;
   float **pptr = &ptr;

   printf("%f",**pptr);
}