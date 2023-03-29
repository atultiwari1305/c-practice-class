#include<stdio.h>

int main(){

int a[10][10], transpose[10][10],r,c,i,j;
printf("Enter rows and columns of the matrix: \n");
scanf("%d %d",&r,&c);

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("Enter the element for a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}
//displaying the matrix
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("\n\n");
///transpose

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        transpose[i][j]=a[j][i];
    }
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       printf("%d ",transpose[i][j]);
    }
    printf("\n");
}
    return 0;
}