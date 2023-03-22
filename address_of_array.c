#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5} , i;
    printf("\nPrinting the base address of the array: ");
    printf("\n%u %u %u",&a[0],a,&a);

    printf("\nPrinting the base address of all array elements: ");
    for(i=0;i<5;i++)
    {
        printf("\n%d",&a[i]);
    }
    return 0;
}