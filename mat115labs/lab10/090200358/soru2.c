#include<stdio.h>
#include<string.h>

int isSub(char *str,char *sub);

int main(){
	char *string = "Mathematical Engineeering";
	char sub[100];
	printf("Looking for >> %s\nEnter the substring:\n",string);
	gets(sub);
	printf("Result is: %d\n",isSub(string,sub));
	
	
	
	
	return 0;
}

int isSub(char *str, char *sub){
	int i,j,count=1;
/*Asagida yapılan işlemler sırasıyla:
	1- Substringin ilk karakterini verilen stringin karakterleriyle sirasiyla karsilastir: Ayni karakterleri buldugunda dur. Hic bulamazsan return -1;
	2- Durdugun yerden sonra sirayla substringin karakterleriyle verilen stringin karakterlerini karsilastir.
	Eger hepsi ayniysa durdugun indeksi return et: Yoksa 1.adima kaldigin yerden devam et.
	  
*/
	for(i=0;str[i]!='\0';i++){
		if(str[i]==sub[0]){
			for(j=1;sub[j]!='\0';j++){
				if(str[i+j] == sub[j])
					count++;
				if(count == strlen(sub))
					return i;
			}
			count = 1;	
		}
	}

return -1;	
}
