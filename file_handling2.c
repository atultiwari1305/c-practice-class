#include<stdio.h>
int main()
{
    FILE *fptr;
    char c;
    fptr=fopen("a.txt","r");
    printf("The line of text is: ");
    while((c=getc(fptr))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fptr);
}