#include<stdio.h>
int main()
{
    float average,total;
    int counter;
    printf("Enter the total value in decimal: ");
    scanf("%f",&total);
    printf("Enter the counter value in integer: ");
    scanf("%d",&counter);
    average = total / (float)counter;
    printf("Your average is : %f",average);
    return 0;
}