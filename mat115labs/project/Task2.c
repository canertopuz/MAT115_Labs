#include <stdio.h>
#include <stdlib.h>

int main(){
	long long int text,key,ctext;
	int *arr_text,*arr_key;
	char *encrypted;
	int i=0,sum=0,count=0,k,t;
	
	printf("Enter the crypted text:");
	scanf("%lli",&text);
	
	printf("\nEnter the key:");
	scanf("%lli",&key);
	
	ctext = text;
	
	arr_text = (int*)malloc(1*sizeof(int ));
	if(arr_text == NULL){
		printf("\aERROR");
		return 0;
	}
	
	arr_key = (int*)malloc(1*sizeof(int ));
	if(arr_key == NULL){
		printf("\aERROR");
		return 0;
	}
	
	encrypted = (char*)malloc(1*sizeof(char));
	if(encrypted == NULL){
		printf("\aERROR");
		return 0;
	}
	
	
	
	while(key != 0){
		arr_key[i] = key % 10;
		if(arr_key[i] == 2 || arr_key[i] == 3){
			key -= arr_key[i];
			key /= 10;
			sum += arr_key[i];
			arr_key = realloc(arr_key,(++i+1)*sizeof(int));
		}
        
		else{
			printf("\aKey is not proper");
			return 0;
		}
		    		 
	}
	
	t = i;
	
	while(ctext != 0){
		k = ctext % 10;
		ctext -= k;
		ctext /= 10;
		count++;	
	}
	
	
	if(sum != count){
		printf("\aThe key and encrypted text are not compatible and cannot be resolved");
		return 0;
	}
	
	for(k=0;k<i;k++){
		if(arr_key[k] == 2){
			arr_text[k] = text % 100;
			text -= arr_text[k];
			text /= 100;	
		}
		
		if(arr_key[k] == 3){
			arr_text[k] = text % 1000;
			text -= arr_text[k];
			text /= 1000;	
		}	
	}

	
	encrypted = realloc(encrypted,(t+1)*sizeof(char));
	
	
	for(k=0;k<t;k++)
		encrypted[k] = arr_text[k];
	
	for(k=t;k!=-1;k--)
		printf("%c",encrypted[k]);
	
	free(arr_key);
	free(arr_text);
	free(encrypted);
	
	return 0;
}
