#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the value you want to print: ");
    scanf("%d",&a);
    do
    {
        printf("\n%d",i);
        i++;
    }
    while(i<=a);
    return 0;
}