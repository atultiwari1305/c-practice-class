#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the array elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}