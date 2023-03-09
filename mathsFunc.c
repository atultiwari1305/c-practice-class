#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    printf("Enter the value of main number: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);

    printf("\nThe square root of x is: %f",sqrt(x));
    printf("\nThe exponential value of x is: %f",exp(x));
    printf("\nThe log value of x is: %f",log10(x));
    printf("\nThe absolute value of x is: %f",fabs(x));
    printf("\nThe round of for next is: %f",ceil(x));
    printf("\nThe round of for previous int is: %f",floor(x));
    printf("\nThe x to power of y is: %f",pow(x,y));
    printf("\nThe remainder of x/y is: %f",fmod(x,y));
    printf("\nThe sine of x is: %f",sin(x));
    printf("\nThe cos of x is: %f",cos(x));
    printf("\nThe tan of x is: %f",tan(x));

    return 0;
}