#include<stdio.h>

void value(int);

int main(){

int arr[100],n,i;
printf("Enetr n: ");
scanf("%d",&n);

printf("Enter array elements: \n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("Passing element by value: \n");
for(i=0;i<n;i++){
    value(arr[i]);
}
 return 0;
}

void value(int u){
    printf("%d ", u);
}