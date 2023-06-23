#include <stdio.h>
#include <math.h>

int factor(int num){
	int factorial=1;
	
	for (int i=1; i<=num; i++){
		factorial = factorial * i;
	}
	
	printf ("\n El factorial es: %d", factorial);
	
	return 0;
}

int main() {
	int num=0;
	
	printf ("Ingrese un numero:\n");
	scanf ("%d", &num);
	
	factor(num);
	
	return 0;
}

