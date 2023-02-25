#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter the value: ");
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
        if(i==a)
        {
            goto there;
        }
        printf("%d\n",i);
    }
    there:
    printf("Table of %d is: \n",a);
    for(j=1;j<=10;j++)
    {
        printf("%d x %d = %d\n",a,j,3*j);
    }
    return 0;
}