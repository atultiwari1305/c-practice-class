#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEntered array elements are: ");

    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}