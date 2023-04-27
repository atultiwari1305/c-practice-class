#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int n;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the secomd string: ");
    gets(str2);
    printf("\nEnter the number of characters: ");
    scanf("%d",&n);
    strncat(str1,str2,n);
    printf("New string is: %s",str1);
    return 0;
}