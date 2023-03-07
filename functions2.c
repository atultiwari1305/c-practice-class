#include<stdio.h>
int add(int a, int b);

int main()
{
    int x,y;
    printf("Enter value of a: ");
    scanf("%d",&x);
    printf("Enter value of b: ");
    scanf("%d",&y);
    printf("%d",add(x,y));
    puts(" ");
    return 0;
}

int add(int a, int b)
{
    return a+b;
}