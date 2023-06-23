#include <stdio.h>
#include <math.h>

int pagar(int compra, int descuento){
	float pague=0;
	float fin=0;
	
	pague = descuento*0.01*compra;
	fin = compra - pague; 
	
	printf ("\nEl total a pagar es:\t %f", fin);
	
	return 0;
}

int main() {
	int compra=0, descuento=0;
	
	printf ("Ingrese el valor de la compra:\t");
	scanf ("%d", &compra);
	
	printf ("\nIngrese el procentaje de descuento:\t");
	scanf ("%d", &descuento);
	
	pagar(compra, descuento);
	return 0;
}

