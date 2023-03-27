#include<stdio.h>
#include<math.h>
double parquet(char,double);
int main(){
	char quality;
	double m2;
	
	printf(">> Enter the quality of parquet:\n");
	quality = getc(stdin);
	printf(">> Enter the m^2:\n");
	scanf("%lf",&m2);
	
	printf(">> The final price is %lf",parquet(quality,m2));
	return 0;
	
}

double parquet(char qua, double m2){
	
	double fee;
	int x=0;
	switch(qua) {
		
		case 'A': {
			
			fee = (42.5 * m2)+(m2 * 25.4);
			if(fee>=1000){
				fee = 0.9*fee;
				x = 1;
			}
			
			break;
		}
		case 'B': {
			
			fee = (28.5 * m2)+(m2 * 25.4);
			if(fee>=1000){
				fee = 0.9*fee;
				x = 1;
			}
			
			break;
		}
		case 'C': {
			
			fee = (19.0 * m2)+(m2 * 25.4);
			if(fee>=1000){
				fee = 0.9*fee;
				x=1;
			}
			
			break;
		}
		
		
		
		
	}
	
	printf(">> Has the discount been applied: %d\n",x);
		if (x==1)
			printf(">> The undiscounted price is %lf\n",fee*(10.0/9));
	
	return fee;
}
