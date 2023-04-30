#include<stdio.h>
int main()
{
    char s1[100];
    int i=0;
    printf("Enter the string: ");
    gets(s1);

    while(s1[i]!='\0')
    {
        i++;
    }
    printf("The length is : %d",i);
    return 0;
}