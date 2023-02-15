//wap to find whether the number entered by user is smallest or greater out of two variables

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    if(a>b){
        printf("Greater number is : %d",a);
    }
    if(a<b){
        printf("Greater number is : %d",b);
    }
}