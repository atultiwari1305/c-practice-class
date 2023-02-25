//wap to print any series and in that ask the user to skip any two numbers using continue statement

#include<stdio.h>
int main()
{
    int i,j,a,b,n,m;
    printf("Enter the number of repetition: ");
    scanf("%d",&n);
    printf("Enter the series length: ");
    scanf("%d",&m);
    printf("Enter the first value you dont want to print: ");
    scanf("%d",&a);
    printf("Enter the second value you dont want to print: ");
    scanf("%d",&b);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j==a)
            {
                continue;
            }
            else if(j==b)
            {
                continue;
            }
            printf("%d\n",j);
        }
    }
    return 0;
} 