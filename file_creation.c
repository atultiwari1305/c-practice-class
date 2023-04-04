#include<stdio.h>
int main()
{
    FILE *fp;
    char name[20], arr[50];
    printf("Enter the name of the file: ");
    scanf("%s",name);
    fp=fopen(name,"w");
    if(fp==NULL)
    {
        printf("File cannot be opened");
    }
    else
    {
        printf("Enter the string: ");
        scanf("%s",arr);
        fputs(arr,fp);
    }
    fclose(fp);
}