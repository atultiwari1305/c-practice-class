#include<stdio.h>
int main()
{
    FILE *fptr;
    char temp,name[10];
    printf("Enter the name of the file: ");
    scanf("%s",name);
    fptr=fopen(name,"r+");
    while((temp=getc(fptr))!=EOF)
    {
        if(temp=='x')
        {
            fseek(fptr,-1,1);
            putc('y',fptr);
        }
    }
    fclose(fptr);
}