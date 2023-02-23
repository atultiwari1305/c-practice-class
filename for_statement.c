#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    for(; n>0 ; n--)
    {
        printf("\n%d",n);
    }
    return 0;
}