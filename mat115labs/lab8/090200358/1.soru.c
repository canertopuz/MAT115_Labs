#include<stdio.h>
#include<stdlib.h>

int main(){
	int *array,sum=0,i,N;
	float averageFirstArray,averageExpandedArray;
	
	printf(">>Enter the size of array:");
	scanf("%d",&N);
	
	array= (int*)malloc(sizeof(int)*N);
	if(array == NULL){
		printf(">>malloc() failed.\n");
		return 0;
	}
	
	for(i=0;i<N;i++){
		if((i%2) == 0)
			*(array+i)= (19*i + 73)%100;
		else
			*(array+i)= (13*i + 94)%100;	
		
		sum += *(array+i);
	}
	
	averageFirstArray = (float)sum/N;
	
	array= (int*)realloc(array,(2*N)*sizeof(int));
	if(array == NULL){
		printf(">>realloc() failed.\n");
		return 0;
	}
	
	for(i=N;i<2*N;i++){
		if((i%2) == 0)
			*(array+i)= (7*i + 119)%100;
		else
			*(array+i)= (11*i + 29)%100;	
		
		sum += *(array+i);
	}
	
	averageExpandedArray = (float)sum/(2*N);
	printf(">>Average before expanded:%f\n>>Average after expanded:%f\n",averageFirstArray,averageExpandedArray);
	if(averageFirstArray > averageExpandedArray)
		printf(">>Array has maximum average before expanded.");
	else
		printf(">>Array has maximum average after expanded.");

	free(array);
return 0;
}
