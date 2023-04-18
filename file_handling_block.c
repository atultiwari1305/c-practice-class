#include<stdio.h>
struct student
{
    int rollNo;
    char name[20];
};
int main()
{
    struct student st;
    FILE *fptr=fopen("C:\\Users:\\Atul Tiwari:\\OneDrive:\\Desktop:\\c programs:\\c-practice-class:\\files:\\studentDetails","r");
    fread(&st,sizeof(st),1,fptr);
    printf("Roll no is %d",st.rollNo);
    printf("\nStudent name is %s",st.name);
    fclose(fptr);
}