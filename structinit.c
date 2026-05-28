#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {53,9.81,"AARYAN"};
    printf("Student's Name : %s\n",s1.name);
    printf("Student's Roll Number : %d\n",s1.roll);
    printf("Student's CGPaA = %f\n",s1.cgpa);
}