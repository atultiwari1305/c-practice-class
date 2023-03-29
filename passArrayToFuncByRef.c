#include<stdio.h>

void reference(int [], int); //function prototype

int main(){

int arr[100],n,i;
printf("Enter n: ");
scanf("%d",&n);
printf("Enter array elements: \n");

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("Elements by reference: \n");
reference(arr,n);
    return 0;
}
///function: 
void reference(int x[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",x[i]);
    }
}