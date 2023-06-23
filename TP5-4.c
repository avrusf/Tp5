#include <stdio.h>

int menor(int num1, int num2, int num3){
	if (num1<num2){
		if (num1<num3){
		num1= num1 + 0;
		}
		else if(num3<num1){
		num3= num3 + 0;
		}
	} 
	else if (num1>num2){
		if (num2<num3){
			num2= num2 + 0;
		}
		else if (num3<num2){
			num3= num3 + 0;
		}
		
	}
}

int main() {
	int num1=0, num2=0, num3=0;
	
	printf ("Ingrese 3 numeros\n");
	scanf ("%d", &num1);
	
	printf ("Ingrese 3 numeros\n");
	scanf ("%d", &num2);
	
	printf ("Ingrese 3 numeros\n");
	scanf ("%d", &num3);
	
	printf ("El numero menor es: %d", menor(num1, num2, num3));
	
	return 0;
}

