#include<stdio.h>
int main(){
	int v1,v2,v3;
	printf("Enter the first value:");
	scanf("%d",&v1);
	printf("Enter the second value");
	scanf("%d",&v2);
	printf("Memory Organization Before Change: %d,%d\n",v1,v2);
	v3=v1+v2;
	v1=v3-v1;
	v2=v3-v2;
	
	printf("Memory Organization After Change: %d,%d ",v1,v2);
	return 0;
	


	
	
	
}
