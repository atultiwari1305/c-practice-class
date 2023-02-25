//wap to start a loop and ask user to upto what value should be print

#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the value upto which you want to print: ");
    scanf("%d",&a);
    for(i=1;i<=100;i++)
    {
        printf("%d\n",i);
        if(i==a)
        {
            break;
        }
    }
    return 0;
}