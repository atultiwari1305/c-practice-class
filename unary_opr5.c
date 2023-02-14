#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter value of x: ");
    scanf("%d",&x);
    y=--x;
    z=x--;
    printf("%d,%d,%d",x,y,z);
    return 0;
}