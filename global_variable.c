#include<stdio.h>
int a=1;
void print();
int main()
{
    printf("\na=%d",a);
    print();
    return 0;
}
void print()
{
    printf("\na=%d",a);
}