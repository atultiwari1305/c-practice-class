//wap to ask the user to enter name,city,state and then display that to user

#include<stdio.h>
int main()
{
    char name[20], city[30], state[20];
    puts("Enter your name: ");
    gets(name);
    puts("Enter your city name: ");
    gets(city);
    puts("Enter your state name: ");
    gets(state);
    puts("Your details are : ");
    puts(name);
    puts(city);
    puts(state);
    return 0;
}