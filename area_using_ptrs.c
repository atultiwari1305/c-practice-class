#include<stdio.h>
int main()
{
    double radius,area=0.0;
    double *pradius=&radius,*parea=&area;
    printf("Enter the radius: ");
    scanf("lf",pradius);
    *parea=3.14*(*pradius)*(*pradius);
    printf("\nArea of radius %.2lf = %.2lf",*pradius,*parea);
    return 0;
}