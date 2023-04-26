#include<stdio.h>
int main()
{
    int i, n, arr[20], sum=0;
    int *pn=&n, *parr=arr, *psum=&sum;
    float mean=0.0,*pmean=&mean;

    printf("\nEnter the number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<*pn;i++)
    {
        printf("\nEnter the number: ");
        scanf("%d",(parr+i));
    }
    for(i=0;i<*pn;i++)
    {
        *psum=*psum+*(arr+i);
    }
    *pmean=*psum/ *pn;
    printf("\nThe numbers entered are: ");
    for(i=0;i<*pn;i++)
    {
        printf("\n%d",*(arr+i));
    }
    printf("\nThe sum of array is: %d",*psum);
    printf("\nThe mean is: %f",*pmean);
    return 0;
}