#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    c=a++ +b;
    printf("%d,%d,%d",a,b,c);
    return 0;
}