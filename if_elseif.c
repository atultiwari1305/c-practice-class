#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the first comparison number: ");
    scanf("%d",&b);
    printf("Enter the second comparison number: ");
    scanf("%d",&c);

    if(a<b)
    {
        printf("%d is less than %d",a,b);
    }
    else if(a<c)
    {
        printf("%d is less than %d",a,c);
    }
    return 0;
}