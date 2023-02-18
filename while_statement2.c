#include<stdio.h>
int main()
{
    int n=1,a;
    printf("Enter the value of n upto which it should print: ");
    scanf("%d",&a);
    while(n<=a)
    {
        printf("\n%d",n);
        n++;
    }
    return 0;
}