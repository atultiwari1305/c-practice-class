#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number for multiplication table: ");
    scanf("%d",&n);
    printf("Enter from where you want multiplication table: ");
    scanf("%d",&i);
    printf("Enter upto where you want multiplication table: ");
    scanf("%d",&j);
    do
    {
        printf("\n%d X %d = %d",n,i,n*i);
        i++;
    }
    while(i<=j);
    return 0;
}