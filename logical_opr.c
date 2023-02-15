//wap to understand logical operators
// && is used as AND logical operator
// || is used as OR logical operator
// ! is used a NOT logical operator

#include<stdio.h>
int main()
{
    {
        int a=10,b=0,c;
        c=a&&b;
        printf("\n%d",c);
    }
    {
        int a=10,b=0,c;
        c=a||b;
        printf("\n%d",c);
    }
    return 0;
}