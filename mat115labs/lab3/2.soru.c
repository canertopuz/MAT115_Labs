#include<stdio.h>
#include<math.h>
int main(){
	double a=5,b=7,c;
	double gama=55;
	double alfa,beta;
	double radian = M_PI/180; 
	double sinlaw;
	
	c= sqrt(a*a+b*b-2*a*b*cos(radian*gama));
	
	printf("> The lenght of c is: %lf\n",c);
	
	sinlaw = c/ sin(gama*radian); // angle_rad = angle_deg*( PI/180)
	
	alfa= asin(a/ sinlaw) / radian; //angle_deg = angle_rad*(180/PI) radian--> (PI/180)
	beta= asin(b/ sinlaw) / radian;
	
	printf("> The degree of alfa is: %lf\n> The degree of beta is: %lf\n",alfa,beta);
	
	printf("> The sum of angles is: %lf",alfa+beta+gama);
	
	
	
	return 0;
}
