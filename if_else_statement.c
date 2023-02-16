#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);

    if(a<10)
    {
        printf("The number is less than 10");
    }
    else
    {
        printf("The number is greater than 10");
    }
    return 0;
}