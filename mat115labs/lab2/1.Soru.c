#include<stdio.h>                                         
int main(){
	float miles,gallon,miles_per_gallon,fees_per_day,tools_per_day,total;
	printf("Enter the total miles driven per day:");
	scanf("%f",&miles);
	printf("Enter the cost per gallon of gasoline:");
	scanf("%f",&gallon);
	printf("Enter the average miles per gallon:");
	scanf("%f",&miles_per_gallon);
	printf("Enter the parking fees per day:");
	scanf("%f",&fees_per_day);
	printf("Enter the tolls per day:");
	scanf("%f",&tools_per_day);
	
	total=((miles/miles_per_gallon)*gallon)+tools_per_day+fees_per_day;
	printf("Total cost per day: %f",total);
	return 0;
	
}
