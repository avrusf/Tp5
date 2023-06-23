#include <stdio.h>
#include <math.h>

int plano(int x1, int y1, int x2, int y2){
	int xv=0, yv=0;
	float modulo=0;
	
	xv= x1 - x2;
	yv= y1 - y2;
	
	modulo= sqrt(xv*xv + yv*yv);
	
	printf ("La distancia es:\t%.2f", modulo);
	return 0;
}

int main() {
	int x1=0, x2=0, y1=0, y2=0;
	
	printf ("Ingrese las coordenadas de un punto:\n");
	scanf ("%d %d", &x1, &y1);
	
    printf ("Ingrese las coordenadas del segundo punto:\n");
	scanf ("%d %d", &x2, &y2);
	
	plano(x1, y1, x2, y2);
	
	return 0;
}

