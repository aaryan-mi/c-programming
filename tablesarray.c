// // #include <stdio.h>
// // int main(){
// //     int tables[2][10] = {{2,4,6,8,10,12,14,16,18,20},{3,6,9,12,15,18,21,24,27,30}};
// //     printf("%d",tables[2][10]);
// // }

// #include <stdio.h>

// int printtable(int table[][10], int m, int n, int number);

// int main(){
//     int table[2][10];
//     /*
//     int table[2][10];

// Valid indexes are:

// rows → 0 to 1
// columns → 0 to 9*/
//     printtable(table, 0, 10, 2);
//     /*
//     table means we passed table 2d matrix
//     m is row, hence 0th row and n is basically no. of elements in 0th row
//     It fills row 0 with 10 values (index 0 to 9)
//     and number is 2 means table of 2
//     m = row index (0)
//     n = total columns to fill (10 elements → index 0 to 9)
//     number = 2 means fill multiples of 2
//     */
//     printtable(table, 1, 10, 3);
//     /*
//     table means we passed table 2d matrix
//     m is row, hence 1st row and n is basically no. of elements in 1st row
//     // It fills row 1 with 10 values (index 0 to 9)
//     and number is 3 means table of 3
//     m = 1 → second row
//     n = 10 → fill 10 elements (0 to 9)
//     number = 3 → table of 3
//     */

//     for(int i=0;i<10;i++){
//         printf("%d\t",table[0][i]);
//         /*
//         o means first row
//         i because we need values of i from 0 to 9 to be printed
//         */
//     }

//     printf("\n");

//     for(int i=0;i<10;i++){
//         printf("%d\t",table[1][i]);
//         /*
//         1 means 2nd row
//         i because we need values of i from 0 to 9 to be printed
//         */
//         /*
//         m = fixed row (decided in main)
//         i = column index (changes from 0 to n-1)
//         n = number of columns to fill (10 → index 0 to 9)
//         (i+1) because table starts from 1×number, not 0×number
//         */
//     }
// }


// int printtable(int table[][10], int m, int n, int number){
//     for (int i=0;i<n;i++){
//         table[m][i] = number * (i+1);
//         /*
//         here m is the row which is fixed and doesnt change
//         from main function we gave row 0 and 1 accordingly
//         i < n means , n is the size of array (basically column)
//         so print from 0 to the last column
//         */
//     }
// }



#include <stdio.h>

void printtable(int table[][10], int m, int n, int number); // 2nd dimension must be specified for 2D array parameter

int main(){
    int table[2][10];
    /*
    int table[2][10];

    Valid indexes are:

    rows → 0 to 1
    columns → 0 to 9
    */

    printtable(table, 0, 10, 2);
    /*
    table means we passed table 2d matrix
    m is row, hence 0th row and n is basically no. of elements in that row
    It fills row 0 with 10 values (index 0 to 9)
    and number is 2 means table of 2
    m = row index (0)
    n = total columns to fill (10 elements → index 0 to 9)
    number = 2 means fill multiples of 2
    */

    printtable(table, 1, 10, 3);
    /*
    table means we passed table 2d matrix
    m is row, hence 1st row and n is basically no. of elements in that row
    It fills row 1 with 10 values (index 0 to 9)
    and number is 3 means table of 3
    m = 1 → second row
    n = 10 → fill 10 elements (0 to 9)
    number = 3 → table of 3
    */

    for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
        /*
        0 means first row
        i because we need values of i from 0 to 9 to be printed
        */
    }

    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
        /*
        1 means 2nd row
        i because we need values of i from 0 to 9 to be printed
        */
    }

    return 0;
}


void printtable(int table[][10], int m, int n, int number){
    for (int i=0;i<n;i++){
        table[m][i] = number * (i+1);
        /*
        m = fixed row (decided in main)
        i = column index (changes from 0 to n-1)
        n = number of columns to fill (10 → index 0 to 9)
        (i+1) because table starts from 1×number, not 0×number

        here m is the row which is fixed and doesnt change
        from main function we gave row 0 and 1 accordingly
        i < n means , n is the size of array (basically column count)
        so fill from 0 to the last column
        */
    }
}