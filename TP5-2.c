#include <stdio.h>
#include <math.h>
int cuadratica(int a, int b, int c){
	float x1=0;
	float x2=0;
	
	int cuadratica;
	cuadratica = b*b-4*a*c;
	printf ("cuadratica %d",cuadratica);
	if (cuadratica>=0){
		x1=(-b+sqrt(cuadratica))/(2*a);
		x2=(-b-sqrt(cuadratica))/(2*a);
	}
	else {
		printf ("Error: raices complejas\n");
		
	}
	printf("\n Los valores de las raices son: %.2f\t %.2f\n ", x1, x2);
	
	return cuadratica;
}
	int main() {
		int a;
		int b;
		int c;
		
		printf("\n Introduzca el coeficiente a:");
		scanf("%d", &a);
		
		printf("\n Introduzca el coeficiente b:");
		scanf("%d", &b);
		
		printf("\n Introduzca el coeficiente c:");
		scanf("%d", &c);
		
		cuadratica (a, b, c);
		
		return 0;
	}
	
