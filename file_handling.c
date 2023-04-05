#include<stdio.h>
int main()
{
    FILE *fptr;
    // clrscr();
    fptr=fopen("a.txt","w");
    if(fptr==NULL)
    {
        printf("\nFile cannot be opened for creation");
    }
    else
    {
        printf("\nFile created successfully");
    }
    fclose(fptr);
}