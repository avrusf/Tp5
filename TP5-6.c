#include <stdio.h>
#define PI 3.141516
#include <math.h>

float circulo (float radio, float opcion){
	float longitud = 0;
	float area = 0;
	float volumen = 0;
	
	if (opcion == 1)
	{
		longitud = 2*PI*radio;
		printf ("La longitud es: %.2f", longitud);
	} 
	else if (opcion == 2)
	{
		area = (PI*radio*radio);
		printf ("El área es: %.2f", area);
	} 
	else if (opcion == 3)
	{
		volumen = ((4/3)*PI*radio*radio*radio);
		printf ("El volumen es: %.2f", volumen);
	}
	else {
		printf ("No es posible hacer ese calculo, ingrese otro numero");
	}
	
	return 0;
}

int main() {
	int radio=0;
	float opcion;
	
	printf ("Ingrese el radio de la circunferencia:\t");
	scanf ("%d", &radio);
	
	printf ("\nElija la opcion:\n 1) Longitud de la circunferencia\n 2) Area del círculo\n 3) Volumen de la esfera\n");
	scanf ("%f", &opcion);
	
	circulo (radio, opcion);
	
	return 0;
}

