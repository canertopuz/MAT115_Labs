#include<stdio.h>

int main(){
	
	char first,sec,third;
	int result;
	printf("> Enter the first character:");
	scanf("%c",&first);
	getchar();
	printf("> Enter the second character:");
	sec = getchar();
	getchar();
	printf("> Enter the third character:");
	third = getc(stdin);
	
	result = abs(first-sec) == abs(sec-third);
	
	printf("> Is %c middle of the %c and %c : %d",sec,first,third,result);
	return 0;
	

	
	
	
}
