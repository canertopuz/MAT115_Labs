#include<stdio.h>

int main(){
	double f,k;
	printf("Enter the temperature in Fahrenheit:");
	scanf("%lf",&f);
	k = (f-32)/1.8+273.15;
	printf("%lf Fahrenheit is equal to %lf Kelvin",f,k);
	return 0;
}
