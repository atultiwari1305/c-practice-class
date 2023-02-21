#include<stdio.h>
int main()
{
    int i;
    printf("Enter the value you want to print: ");
    scanf("%d",&i);
    do
    {
        printf("\n%d",i);
        i--;
    }
    while(i>0);
    return 0;
}