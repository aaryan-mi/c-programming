// #include <stdio.h>
// void wau();

// int main (){
//     wau();
// }

// void wau(){
//    int i;
//     printf("Enter your number (1 for indian, 2 for french)");
//     scanf("%d",&i);

//     if(i==1){
//         printf("Namaste");
//     } else if(i==2) {
//         printf("Bonjour");
//     } else {
//         printf("Invalid choice");
//     }
// }


#include <stdio.h>

void namaste();
void bonjour();

int main() {
    printf("enter f for french & i for indian: ");
    
    char ch;
    scanf(" %c", &ch); // notice space before %c

    if(ch == 'i') {
        namaste();
    } else {
        bonjour();
    }

    return 0;
}

void namaste() {
    printf("Namaste\n");
}

void bonjour() {
    printf("Bonjour\n");
}