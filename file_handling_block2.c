#include<stdio.h>
struct student
{
    int rollNo;
    char name[20];
};
int main()
{
    struct student st;
    FILE *fptr=fopen("C:\\Users:\\Atul Tiwari:\\OneDrive:\\Desktop:\\c programs:\\c-practice-class:\\files:\\studentDetails.txt","w");
    printf("Enter roll number: ");
    scanf("%d",&st.rollNo);
    printf("Enter name: ");
    scanf("%s",st.name);
    fputs(st.name,fptr);
    fwrite(&st,sizeof(st),1,fptr);
    fclose(fptr);
}