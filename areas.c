// #include <stdio.h>
// int square(int n);
// int circle(int n);
// int rectangle(int n, int m);

// int main(){
//     int i,n, m;
//     printf("Enter your number\n");
//     printf("1 for Square\n");
//     printf("2 for Circle\n");
//     printf("3 for Rectangle\n");
//     scanf("%d",&i);

//     if(i==1){
//        square(n);
//     }else if(i==2){
//         circle(n);
//     }else if(i==3){
//         rectangle(n,m);
//     }else printf("Invalid Choice");
//     return 0;
// }

// int square(int n){
//     scanf("%d",&n);
//     printf("Area of square : %d",n*n);
// }

// int circle(int n){
//     scanf("%d",&n);
//     printf("Area of circle : %d", 3.14*n*n);
// }

// int rectangle(int n, int m){
//     scanf("%d %d",&n,&m);
//     printf("Area of Rectangle : %d",n*m);
// }

// Function implementations for calculating areas:
#include <stdio.h>

int square(int n);
float circle(int n);
int rectangle(int n, int m);

int main() {
    int i, n, m;

    printf("Enter your choice\n");
    printf("1 for Square\n");
    printf("2 for Circle\n");
    printf("3 for Rectangle\n");
    scanf("%d", &i);

    if(i == 1){
        printf("Enter side of square: ");
        scanf("%d", &n);
        printf("Area of square: %d", square(n));

    } else if(i == 2){
        printf("Enter radius of circle: ");
        scanf("%d", &n);
        printf("Area of circle: %.2f", circle(n));

    } else if(i == 3){
        printf("Enter length and breadth: ");
        scanf("%d %d", &n, &m);
        printf("Area of rectangle: %d", rectangle(n, m));

    } else {
        printf("Invalid Choice");
    }

    return 0;
}

int square(int n){
    return n * n;
}

float circle(int n){
    return 3.14 * n * n;
}

int rectangle(int n, int m){
    return n * m;
}