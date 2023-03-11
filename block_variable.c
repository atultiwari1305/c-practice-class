#include<stdio.h>
int main()
{
    int b=2;
    {
        int a=1;
        printf("\na=%d",a);
    }
    printf("\nb=%d",b);
    return 0;
}