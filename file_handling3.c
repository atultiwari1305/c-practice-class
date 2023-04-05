#include<stdio.h>
int main()
{
    FILE *fptr=fopen("a.txt","w");
    char c;
    printf("Enter the line of text, press ^z to stop: ");
    while((c=getchar())!=EOF)
    {
        putc(c,fptr);
    }
    fclose(fptr);
}