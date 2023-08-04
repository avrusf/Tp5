#include <stdio.h>

int recuento(int dia, int mes, int ano){
	int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int total=0;
	
	if (ano %4==0){//paso 1
		if(ano %100==0){//paso 2
			if (ano %400==0){//paso3
				for (int i=0; i<mes-1; i++){
					total= meses[i]+ total;
				}
				total=total+dia+1;
				printf("%d", total);
			} else {//paso 5 mandado por el 3
				for (int i=0; i<mes-1; i++){
					total= meses[i]+ total;
				}
				total=total+dia;
				printf("%d", total);
			}
			
		}else {//paso 4 mandado por el 2
			for (int i=0; i<mes-1; i++){
				total= meses[i]+ total;
			}
			total=total+dia+1;
			printf("%d", total);
		}
		
	} else {//paso 5 mandado por el 1
		for (int i=0; i<mes-1; i++){
			total= meses[i]+ total;
		}
		total=total+dia;
		printf("%d", total);
	}
	return 0;
}
	
	int main() {
		int dia=0, mes=0, ano=0;
		
		printf("Ingrese el dia:");
		scanf ("%d,", &dia);
		
		printf("Ingrese el mes en número:");
		scanf ("%d,", &mes);
		
		printf("Ingrese el año:");
		scanf ("%d,", &ano);
		
		recuento(dia,mes,ano);
		return 0;
	}
	
