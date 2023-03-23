//wap to declare, intialize and traverse the value of 2D array

#include<stdio.h>
int main()
{
    int a[2][2] = {{1,2},{3,4}} ,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n%d",a[i][j]);
        }
    }
    return 0;
}