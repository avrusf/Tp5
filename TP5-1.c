#include <stdio.h>

float funcion(int exponente, float base){
	float multiplicacion=1.0;
	
	for (int i=0; i<exponente; i++){
		multiplicacion= multiplicacion * base;
		
	}
	return multiplicacion;
}
	int main() {
		int exponente=0;
		float base=0.0;
		
		printf ("Ingrese un numero\n");
		scanf ("%f", &base);
		
		printf("Ingrese el exponente\n");
		scanf("%d", &exponente);
		
		printf("El resultado es: %.2f\n", funcion(exponente, base));
		
		return 0;
	}
	
