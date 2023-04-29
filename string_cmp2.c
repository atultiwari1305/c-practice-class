#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    int x,n;
	printf("\nEnter first string: ");
	gets(str1);
	printf("\nEnter Second String: ");
	gets(str2);
    printf("\nEnter the number of characters: ");
    scanf("%d",&n);
    x=strncmp(str1,str2,n);
    if(x==0)
    {
        printf("Strings are same");
    }
    else if(x>0)
    {
        printf("Str1 is greater than str2");
    }
    else
    {
        printf("Str1 is less than str2");
    }
    return 0;
}