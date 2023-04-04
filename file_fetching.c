#include<stdio.h>
int main()
{
    FILE *fptr;
    char name[10];
    int sal;
    fptr=fopen("text.txt","r");
    fscanf(fptr,"%s%d",name,&sal);
    while(!feof(fptr))
    {
        printf("%s\t%d\n",name,sal);
        fscanf(fptr,"%s%d",name,&sal);
    }
    fclose(fptr);
}