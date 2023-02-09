//wap to print the details of a student like name, roll no, city, state, contact no,cgpa using variables

#include<stdio.h>
#include<conio.h>
int main()
{
	char name[30]="Atul Kumar Tiwari", city[10]= "Varanasi", state[30]="Uttar Pradesh";
	int roll_no = 71;
	double no=9336980842, reg=12221533;
	float cgpa=0.01;
	
	printf("Your name is: %s",name);
	printf("\nRoll no: %i",roll_no);
	printf("\nReg no: %lf",reg);
	printf("\ncontact no.: %lf",no);
	printf("\ncity: %s",city);
	printf("\nState: %s",state);
	printf("\ncgpa: %f",cgpa);
	return 0;
}


