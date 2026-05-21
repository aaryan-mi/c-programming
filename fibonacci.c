// #include <stdio.h>

// int fibonacci(int n);

// int main(){
//     fibonacci(5);
//     return 0;
// }

// int fibonacci(int n){
//         if(n==0){
//             return 0;
//         } if (n==1){
//             return 1;
//         }
//     int fib = fibonacci(n-1) + fibonacci(n-2);
//     printf("Fibonacci of %d is %d\n",n, fib);
//     return fib;
// }

#include <stdio.h>

int fibonacci(int n);

int main(){
 int n;
 printf("Enter ur no. upt what u need fibonacci");
 scanf("%d",&n);

 for(int i = 0; i<=n; i++){
    printf("%d",fibonacci(i));
 }
 return 0;
}

int fibonacci(int n){
        if(n==0){
            return 0;
        } 
        if (n==1){
            return 1;
        }  
        return fibonacci(n-1) + fibonacci(n-2);
}


/*
fib(4)
├── fib(3)
│   ├── fib(2)
│   │   ├── fib(1) → 1
│   │   └── fib(0) → 0
│   └── fib(1) → 1
└── fib(2)
    ├── fib(1) → 1
    └── fib(0) → 0

fib(4) = fib(3) + fib(2)
fib(4) = fib(3) + fib(2)
fib(3)  = fib(2) + fib(1)
fib(2) = fib(1) + fib(0)
    
*/