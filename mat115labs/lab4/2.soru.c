#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
	int triangle(int, int, int);
	int main(){
		
		int wire,piece_1,piece_2,piece_3;
		int triangle_;
		printf("Enter the lenght of wire: ");
		scanf("%d",&wire);
		
		srand(time(NULL));
		piece_1 = 1 + rand() % (int)(wire*8/10);
		piece_2 = 1 + rand() % (int)((wire-piece_1)*8/10);
		piece_3 = wire - piece_1 - piece_2;
		 
		
		triangle_ = triangle(piece_1, piece_2, piece_3);
		printf("> First piece : %d\n> Second piece: %d\n> Third piece: %d\n",piece_1,piece_2,piece_3);
		
		printf("> Do this wires form a triangle? -----> %d",triangle_);
		
		return 0;
		
	}
	
	int triangle(int piece_1, int piece_2, int piece_3){
		
		int triangle;
		
		triangle = fabs(piece_1 - piece_2) <= piece_3 && piece_3 <= piece_1 + piece_2 && // 3.kenar için üçgen kuralý.
				   fabs(piece_1 - piece_3) <= piece_2 && piece_2 <= piece_1 + piece_3 && // 2.kenar için üçgen kuralý.
				   fabs(piece_2 - piece_3) <= piece_1 && piece_1 <= piece_2 + piece_3;   // 1.kenar için üçgen kuralý.
				   
		
		return triangle;
		
	}
	
