#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("\nEnter first string: ");
	gets(str1);
	printf("\n Enter Second String: ");
	gets(str2);
	strcat(str1,str2);
	printf("\nString after concatenation is: %s",str1);
	return 0;
}
