#include<stdio.h>
int main()
{
    int i=10;
    if(i==10)
    {
        if(i<15)
        {
            printf("Number is less than 15\n");
        }
        if(i<12)
        {
            printf("Number is less than 12 too\n");
        }
        else
        {
            printf("Number is greater than 15");
        }
    }
    return 0;
}