#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {53,9.81,"AARYAN"};
    struct student *ptr = &s1;
    printf("Student's Name : %s\n",(*ptr).name); // access member using (*ptr).name
    printf("Student's Roll Number : %d\n",(*ptr).roll);
    printf("Student's CGPaA = %f\n",(*ptr).cgpa);

    printf("Student's Name : %s\n",ptr->name); // can use -> too
    printf("Student's Roll Number : %d\n",ptr->roll);
    printf("Student's CGPaA = %f\n",ptr->cgpa);


}