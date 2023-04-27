#include<stdio.h>
#include<string.h>
int main()
{
    char ori[20],dup[20];
    char *z;
    printf("Enter your name: ");
    gets(ori);
    z=strcpy(dup,ori);
    printf("Original String is: %s",ori);
    printf("\nDuplicate string is: %s",dup);
    printf("\nThe value of z is: %s",z);
    return 0;
}