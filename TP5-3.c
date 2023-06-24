#include <stdio.h>
#include <math.h>
float requiv (float r1, float r2, float r3){
	float  denominador=0;
	float requiv=0.0;
	
	denominador = (1/r1) + (1/r2) +(1/r3);
	
	requiv = 1/denominador; 
	return requiv; 
}
	int main(void) {
		int r1=0;
		int r2=0;
		int r3=0;
		
		printf("Ingrese 3 valores \n");
		scanf ("%d", &r1);
		
		printf("Ingrese 3 valores \n");
		scanf ("%d", &r2);
		
		printf("Ingrese 3 valores \n");
		scanf ("%d", &r3);
		
		printf ("El resultado es: %f \n ", requiv (r1, r2, r3));
		return 0;
	}
	
	
