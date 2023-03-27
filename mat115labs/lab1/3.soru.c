#include<stdio.h>
int main(){
	double water_v=100,cyl_h=10,cyl_r=2,ball_r=1.5,ball_n=3,pi=3.14,outcome;
	// Aþaðýda, suyun hacmiyle toplarýn toplam hacminin toplamýndan silindirin hacmini çýkardým
	outcome= water_v+ball_n*pi*ball_r*ball_r*ball_r*4.0/3.0-pi*cyl_r*cyl_r*cyl_h;
	printf("%lf",outcome);
	return 0;
	
	
	/* Hocam double yerine float kullanýnca farklý sonuç çýkýyor neden acaba? 
	
	float water_v=100,cyl_h=10,cyl_r=2,ball_r=1.5,ball_n=3,pi=3.14,outcome;
	outcome= water_v+ball_n*pi*ball_r*ball_r*ball_r*4.0/3.0-pi*cyl_r*cyl_r*cyl_h;
	printf("%f",outcome);
	return 0;
	*/
	

}
