#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s1,s2;
    printf("Enter information of 1st student:\n");
    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);

    printf("Enter information of 2nd student:\n");
    printf("Enter name: ");
    scanf("%s",s2.name);
    printf("Enter roll number: ");
    scanf("%d",&s2.roll);
    printf("Enter marks: ");
    scanf("%f",&s2.marks);

    if(s1.marks>s2.marks)
    {
        printf("Marks of student 1 is more than student 2");
    }
    else
    {
        printf("Marks of student 2 is more than student 1");
    }
    return 0;
}