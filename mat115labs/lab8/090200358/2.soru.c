#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j,k,n;
int *array;
	
	printf("Enter the positive integer k:\n");
	scanf("%d",&k);
	printf("Enter the non-negative integer n:\n");
	scanf("%d",&n);

array = (int*)calloc(n, sizeof(int));
	if(array == NULL){
		printf("calloc() failed.\n");
		return 0;		
}
	*(array+k-1) = 1;
	
	for(i=k;i<n;i++){
		for(j=1;j<=k;j++)
			array[i] += array[i-j];
	}
	
	printf("%d is the %dth element of %d-bonacci sequence.",array[n-1],n,k);
	
	return 0;
}
