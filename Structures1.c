#include <stdio.h>

struct car
{
   char *name;
   int seats;
   float price;
};

int main(){

    struct car myCar;
    myCar.name="Renault";
    myCar.seats=2;
    myCar.price=50000;

    printf("%s %d %f \n",myCar.name,myCar.seats,myCar.price);

    return 0;
}