#include<stdio.h>
int main()
{
    int average,total;
    float counter;
    printf("Enter the total value in integer: ");
    scanf("%d",&total);
    printf("Enter the counter value in decimal: ");
    scanf("%f",&counter);
    average = total / (int)counter;
    printf("Your average is : %d",average);
    return 0;
}