#include <stdio.h>

int main(){

int a[100],hold,i,j,n;
printf("Enter value of n: ");
scanf("%d",&n);
printf("Enter elements: \n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Data items in original order: \n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}

///bubble sort
for(i=0;i<n-1;i++){
    for(j=0;j<n-2;j++){
        if(a[j]>a[j+1]){ ///swaping elements 
            hold=a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
        }
    }
}

printf("\nData items in ascending order: \n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}

    return 0;
}


///wAP the user to enter any 10 random numbers, sort them, in descending order