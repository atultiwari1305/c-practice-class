#include <stdio.h>

struct car{
    char name[10];
    int seats;
    float price;
};

int main(){

struct car myCar={"Renault",2,500000};
struct car *myCarPtr; ///defining a pointer

myCarPtr = &myCar; ///assigning address

printf("%s %f %d\n",myCar.name,myCar.price,myCar.seats); ///will print noramlly
printf("%s %f %d\n",myCarPtr->name,myCarPtr->price,myCarPtr->seats); ///print using pointer...method1
printf("%s %f %d\n",(*myCarPtr).name,(*myCarPtr).price,(*myCarPtr).seats); //////print using pointer...method2

    return 0;
}