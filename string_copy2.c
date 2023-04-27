#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int n;
    printf("Enter the source string: ");
    gets(str1);
    printf("Enter the number of character to copy: ");
    scanf("%d",&n);
    strncpy(str2,str1,n);
    printf("Original String is: %s",str1);
    printf("\ncopied string is: %s",str2);
    return 0;
}