#include<stdio.h>
int main(){
	int v1,v2;
	printf("Enter the first value:");
	scanf("%d",&v1);
	printf("Enter the second value");
	scanf("%d",&v2);
	
	v1=v1+v2;
	v2=v1-v2;
	v1=v1-v2;
	
	printf("Memory Organization After Change:\n First value: %d\n Second value:%d ",v1,v2);
	return 0;}
