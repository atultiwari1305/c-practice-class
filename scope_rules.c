#include<stdio.h>
void print();
int a=10;
int main()
{
    int a=1;
    printf("\na=%d",a);
    print();
    return 0;
}
void print()
{
    printf("\na=%d",a);
}