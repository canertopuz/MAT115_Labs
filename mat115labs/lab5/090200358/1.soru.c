#include<stdio.h>
#include<math.h>
void root(double,double,double);
int main(){
	double a,b,c;
	printf("Enter the coefficients of 2nd order equation like (a,b,c):\n");
	scanf("(%lf,%lf,%lf)",&a,&b,&c);
	root(a,b,c);
	return 0;
}
void root(double a,double b,double c){
	
	double d,x1,x2;
	
	d = b*b-(4.0*a*c);
	switch(d>0){
		case (1):{ 
		x1= (-b+sqrt(d))/(2*a);
		x2= (-b-sqrt(d))/(2*a);
		printf("First root is:%lf\nSecond root is:%lf",x1,x2);
		break;
	}
		case (0):{
		switch(d==0){
			case(1):{
				x1=(-b+sqrt(d))/(2*a);
				x2=x1;
				printf("First root and second root is equal and %lf",x1);
				break;
			}
			case(0):{
				printf("There isn't any real roots.");
				break;
				}
			}
		}	
	}
}
