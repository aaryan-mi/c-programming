#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student iot[100];
    iot[0].roll = 53;
    iot[0].cgpa = 9.81;
    strcpy(iot[0].name,"AARYAN");

    printf("Name = %s\n",iot[0].name);
    printf("Roll NO : %d\n",iot[0].roll);
    printf("CGPA = %f\n",iot[0].cgpa);

}