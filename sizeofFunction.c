#include<stdio.h>
int main(){
	int *pnum;char *pch;float *pfnum;double *pdnum;long*plnum;
	printf("\n size of integer point=%d",sizeof(pnum));
	printf("\n size of character point=%d",sizeof(pch));
	printf("\n size of float point=%d",sizeof(pfnum));
	printf("\n size of double point=%d",sizeof(pdnum));
	printf("\n size of long pointer=%d",sizeof(plnum));
	return 0;				
}

