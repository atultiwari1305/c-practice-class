#include<stdio.h>
int cubeByValue(int n);
int main()
{
    int number;
    printf("Enter the number for cubing: ");
    scanf("%d",&number);
    printf("The original number is: %d",number);
    cubeByValue(number);
    printf("\nThe new value of number is: %d",number);
    return 0;
}

int cubeByValue(int n)
{
    return n*n*n;
}