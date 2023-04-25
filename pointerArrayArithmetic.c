#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int i;
    int *p;
    p=arr;
    printf("\nFirst value is : %d",*p);
    p=p+1;
    printf("\nSecond value is : %d",*p);
    *p=45;
    p=p+2;
    *p=-2;
    printf("\nModified array is: ");
    for(i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
    p=arr;
    *(p+1)=0;
    *(p-1)=1;
    printf("\nModified array is: ");
    for(i=0;i<5;i++)
    {
        printf("\n%d",*(p+i));
    }
}