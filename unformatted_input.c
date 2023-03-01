//wap to enter roll no, reg no, name, city, state, cgpa and diplay the whole details

#include<stdio.h>
int main()
{
    int roll_no, reg_no, cgpa;
    char name[20], city[20], state[20];

    puts("Enter your name: ");
    gets(name);
    printf("Enter your roll no: ");
    scanf("%d",roll_no);
    printf("Enter your reg no: ");
    scanf("%d",reg_no);
    puts("Enter your city name: ");
    gets(city);
    puts("Enter your state name: ");
    gets(state);
    puts("\n\n\n\t\t\t\t\t\tYour details are : ");
    puts(name);
    puts(city);
    puts(state);
    return 0;
}