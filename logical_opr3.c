#include<stdio.h>
int main()
{
    int marks, attendance;

    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("Enter your attendance: ");
    scanf("%d",&attendance);

    if(marks>60 && attendance>=75)
    {
        printf("GOOD");
    }
    else
    {
        printf("attend the class for good marks");
    }
}