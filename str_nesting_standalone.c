#include<stdio.h>
struct address
{
    char Housename[25];
    char city[25];
    char streetname[25];
};
struct employee
{
    int id;
    char name[25];
    float salary;
    struct address add;
};

int main()
{
    struct employee E;
    printf("\nEnter employee id: ");
    scanf("%d",&E.id);
    printf("\nEnter employee name: ");
    scanf("%s",E.name);
    printf("\nEnter employee salary: ");
    scanf("%f",&E.salary);
    printf("\nEnter employee housename: ");
    scanf("%s",E.add.Housename);
    printf("\nEnter employee city: ");
    scanf("%s",E.add.city);
    printf("\nEnter employee streetname: ");
    scanf("%s",E.add.streetname);

    printf("\nDetails of employee: ");
    printf("\nEnter employee id: %d",E.id);
    printf("\nEnter employee name: %s",E.name);
    printf("\nEnter employee salary: %f",E.salary);
    printf("\nEnter employee housename: %s",E.add.Housename);
    printf("\nEnter employee city: %s",E.add.city);
    printf("\nEnter employee streetname: %s",E.add.streetname);

    return 0;
}
