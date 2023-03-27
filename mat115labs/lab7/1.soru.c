#include<stdio.h>

int main(){
	int row,col,i,j,count=0;
	printf("Enter the size of square matrix:");
	scanf("%d",&row);
	col = row;
	int matrix[row][col];
	printf("Enter the variables:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nMATRIX\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",matrix[i][j]);
			if(matrix[i][j] != matrix[j][i])
				count++;
		}
		printf("\n");
	}
	printf("\nTRANSPOSE MATRIX\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");
	}
	
	
	if(count==0)
	printf ("\nSymmetric");
	else
	printf("\nAsymmetric");
	return 0;
	
}
