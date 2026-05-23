#include <stdio.h>

int work(int a, int b, int *s, int*p, int*m);

int main(){
    int x = 2, y = 4;
    int s, p, m;
    work(x,y,&s,&p,&m);

    printf("Sum : %d\n",s);
    printf("Product : %d\n",p);
    printf("Average : %d\n",m);

}

int work(int a, int b, int *s, int*p, int*m){
    *s = a + b; // not int here
    /*
    int *s → pointer
    *s → value stored at that pointer

    *p
    p is a pointer which stored address,
    *p means value at that address

    */
    *p = (a) * (b);
    *m = ((a) + (b))/2;
}