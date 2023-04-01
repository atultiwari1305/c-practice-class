///wap to ask the user to enter the record of one student using structures

#include<stdio.h>

struct student
{
    char *name;
    int roll;
    float cgpa;
};


int main(){

struct student info;

printf("Enter student's name: ");
scanf("%s",info.name);
printf("Enter student's roll: ");
scanf("%d",&info.roll);
printf("Enter student's cgpa: ");
scanf("%f",&info.cgpa);

printf("here is the student details: \n");
printf("Name of the student is: ");
puts(info.name);
printf("Roll no. is: %d",info.roll);
    return 0;
}

//wap to ask the user to enter the record of 5 students using structures