#include<stdio.h>

void convert(char *str);
void find_Capitals(char *str, char *cap);

int main(){
	
	char str[] ="MatHemAtIcAL EnginEEEriNG";
	char cap[100];
	printf("Before converting: %s\n",str);
	convert(str);
	printf("After converting: %s\n",str);
	find_Capitals(str,cap);
	printf("Capital letters: %s",cap);
	
	
	
	
	return 0;
}

void convert(char *str){
	int i=0;
	
	while(str[i]){
		if(str[i]>='A' && str[i]<='Z')
			str[i] += 32;
		else if(str[i]>='a' && str[i]<='z')
			str[i] -= 32;
		else;
		i++;
	
	}	
}

void find_Capitals(char *str, char *cap){
	int i=0,j=0;
	while(str[i]){
		if(str[i]>='A' && str[i]<='Z'){
			cap[j] = str[i];
			j++;
		}
		i++;	
	}	
}
