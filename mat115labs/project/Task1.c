#include <stdio.h>

#define	N 100 
#define	FAIL    -2
#define	EMPTY   -1

int Show_Menu();
int Insert(int A[], int ID);
int Find_ID(int A[], int ID);
void Show_All_IDs(int A[]);

main()
{
	int A[N], i, ID, opt, index;
	
	for(i=0; i<N; i++)
		A[i] = EMPTY;
			
	do{
		opt = Show_Menu();  
		
		if(opt==1){ 
			printf("Enter the ID to be stored:");
			scanf("%d",&ID);
			if(!(1<=ID && ID<=999999)){
				printf("\aIncorrect ID number\nPlease enter between [0-999999]\n");
				continue;
			}
				
			index = Insert(A,ID);
			if(index == FAIL)
				continue;
			printf("The ID is inserted into the array\n");
		}
		
		else if(opt==2){
			printf("Enter the ID to be found:");
			scanf("%d",&ID);
			index = Find_ID(A,ID);
			if(index == FAIL)
				continue;
			printf("ID %d has been found into index %d\n",A[index],index);	
		}
		
		else if(opt==3)
			Show_All_IDs(A);	
			
		else if(opt==4)
			continue;
		
		else
			printf("\a Wrong number\n Please try again\n");			
		
	}while(opt!=4);
	      	
	return 0;
}

int Show_Menu(){
	int m;
	printf("################ MENU ################\n");
	printf("1--> Insert a new ID \n2--> Find an ID \n3--> Show all IDs \n4--> Exit \nSelect an option (1,2,3,4)\n");
	scanf("%d",&m);
	return m;
}

int Insert(int A[], int ID){
	int i,count=0;	
	
	i = ID % 100;

	while(A[i] != EMPTY){
		i++;
		if(i == N)
			i = 0;	
		if(count == N){
			printf("\aThe array is full\n");
			return FAIL;	
		}
		count++;
	}
	
	A[i] = ID;
	
	return i;
}

int Find_ID(int A[], int ID){
	int i,count=0;

	i = ID % 100;
	
	while(A[i] != ID){
		i++;
		if(i == N)
			i = 0;
		
		if(count == N){
			printf("\aThe searched ID cannot be found\n");
			return FAIL;
		}
		count++;
	}
	
	return i;
}

void Show_All_IDs(int A[]){
	int i;
	
	for(i=0;i<N;i++){
		if(A[i]!=EMPTY){
			printf("A(%d)=%d\n",i,A[i]);
		}
	}	
}
