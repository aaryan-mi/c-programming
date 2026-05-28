#include <stdio.h>
#include <string.h>

typedef struct ItnaBadaNaamTuNahiLikhegaHaarBaarIsiliye{
    int roll;
    float cgpa;
    char name[100];
} yebol;

int main(){
    yebol s1 = {53,9.91,"AARYAN"};
    printf("Student's Name : %s\n",s1.name);
    printf("Student's Roll Number : %d\n",s1.roll);
    printf("Student's CGPaA = %f\n",s1.cgpa);
}