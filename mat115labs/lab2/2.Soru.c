#include<stdio.h>
#include<stdlib.h>
int main(){
	char x1,y1,x2,y2;
	int d;
	printf("Enter the first point:\n");
	scanf("(%c,%c)",&x1,&y1);
	getchar();
	printf("Enter the second point:\n");
	scanf("( %c,%c)",&x2,&y2);
	
	d = abs(x2-x1) + abs(y2-y1);
	printf("The distance between points (%c,%c) and (%c,%c) is %d. ",x1,y1,x2,y2,d);
	
	return 0;
	
}
