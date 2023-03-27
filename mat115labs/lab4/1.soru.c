#include<stdio.h>
#include<math.h>	
	double acre_to_hectare(double);
		
	int main(){
		double acre,hectare;
		printf("> Enter the value of acre: ");
		scanf("%lf",&acre);
		
		hectare = acre_to_hectare(acre);
		printf("> %lf acre is equal to %lf hectare.",acre,hectare);

		
		return 0;	
	}
	
	double acre_to_hectare(double acre){
		
		double a,b,c,d;
		
		a = 4840*acre; 		// acre to square yards.
		b = a*36*36; 		// square yards to square inches.
		c = b*2.54*2.54;    // square inches to cm^2.
		d = c/100/100;      // cm^2 to m^2.
		acre = d/10000;     // m^2 to hectare.
		
		
		return acre;
	}
