#include <stdio.h>
#include <string.h>

struct student{
        char name [100];
        int roll;
        float cgpa;
    };

void info(struct student s1);

int main(){
    struct student s1 = {"AARYAN",53,9.81};
    info(s1);
    printf("Student's Roll Number : %d\n",s1.roll);
}

void info(struct student s1){
    printf("Student's Name : %s\n",s1.name);
    printf("Student's Roll Number : %d\n",s1.roll);
    printf("Student's CGPaA = %f\n",s1.cgpa);

    s1.roll = 1660; // call by value, hence not printed
}