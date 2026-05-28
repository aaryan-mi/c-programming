#include <stdio.h>
#include <string.h>

struct student{
        char name [100];
        int roll;
        float cgpa;
    };

int main(){

    struct student s1;
       // s1.name = "AARYAN"; 
        /* INVALID, BECAUSE WE CANNOT DIRECTLY 
        CHANGE THE VALUE OF ARRAYS..
        USE POINTER IF YOU WANNA DO THIS
        SO WE USE strcpy FUNCTION */
        strcpy(s1.name,"AARYAN"); // copy string into s1.name
        s1.roll = 53;
        s1.cgpa = 9.81; 

        printf("Student's Name : %s\n",s1.name);
        printf("Student's Roll Number : %d\n",s1.roll);
        printf("Student's CGPA = %f\n",s1.cgpa);
    
}

// Note: Structures are passed by value by default