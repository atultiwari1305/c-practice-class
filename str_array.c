#include<stdio.h>
struct car
{
    char name[50];
    int seats;
    float price;
};
int main()
{
    int i,n;
    printf("Enter the value of array: ");
    scanf("%d",&n);
    struct car mycar[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the details for car[%d]:\n",i);
        scanf("%s %d %f",mycar[i].name, &mycar[i].seats, &mycar[i].price);
    }

    for(i=0;i<n;i++)
    {
        printf("\nData about car[%d] is: %s, %d, %f",i,mycar[i].name, mycar[i].seats, mycar[i].price);
    }


}
