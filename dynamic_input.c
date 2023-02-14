//wap to enter roll no and name

#include<stdio.h>
#include<conio.h>
int main()
{
    int roll_no;
    char name[100];
	printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your roll: ");
    scanf("%d",&roll_no);
    printf("\nYour name is: %s",name);
    printf("\nYour roll no: %d",roll_no);
    return 0;
}