#include<stdio.h>

int main(){
	int sum,size,i,j,count=0;
	
	//int matrix[6][6]={0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0};
	//int matrix[6][6]={0,0,1,0,0,0,0,1,1,0,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,1,1,0,0,0,0,1,1,0,0,0};
	printf("Enter the size of image:");
	scanf("%d",&size);
	int matrix[size][size];
	printf("Enter the elements of image:");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	
	
	int hist[size];

	for(i=0;i<size;i++){
		sum = 0;
		for(j=0;j<size;j++){
			sum = sum + matrix[i][j];
		}
		hist[i] = sum;	
	}
	
	for(i=0;i<size;i++){
		if(hist[i] != 0){
			for(j=size-1;j>-1;j--){
				if(hist[j] != 0){
					if(hist[i] != hist[j]){
					count++;
					break;}
				break;}
			break;}
		}
}
		
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",matrix[i][j]);
			
		}
	printf("\n");
	}
	
		
		
		for(i=0;i<size;i++)
		printf("Row %d: %d\n",i+1,hist[i]);
		if(count == 0)
		printf("Object in image is symmetric.");
		else
		printf("Object in image is asymmetric.");
		
		return 0;
	}
	
	
	
	
	
	
	

