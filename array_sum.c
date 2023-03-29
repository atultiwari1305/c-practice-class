#include <stdio.h>

int main(){

int a[100],n,i,sum=0;
printf("Enter the numnber of elements: \n");
scanf("%d",&n);
printf("Enter array elements: \n");

for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    sum=sum+a[i];
}

printf("Sum of array elements: %d",sum);
    return 0;
}