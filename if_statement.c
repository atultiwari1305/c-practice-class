#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("Enter the value with which you want compare: ");
    scanf("%d",&b);

    if(a<b)
    {
        printf("Number is less than %d",b);
    }
    return 0;

}