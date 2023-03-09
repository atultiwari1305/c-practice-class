#include<stdio.h>
void cubeByRef(int *n);
int main()
{
    int number;
    printf("Enter the number for cubing: ");
    scanf("%d",&number);
    printf("The original number is: %d",number);
    cubeByRef(&number);
    printf("\nThe new value of number is: %d",number);
    return 0;
}

void cubeByRef(int *n)
{
    *n = *n * *n * *n;
}