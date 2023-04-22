#include<stdio.h>
int main()
{
    FILE *fptr;
    int i,n;
    fptr=fopen("C:\\Users:\\Atul Tiwari:\\OneDrive:\\Desktop:\\c programs:\\c-practice-class:\\files:\\studentRoll.txt","w");
    for(i=1;i<=10;i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&n);
        putw(n,fptr);
    }
    fclose(fptr);
}