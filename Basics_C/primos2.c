#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, comando_par, comando_primo, contador, i, resultado;
	
	comando_par=0;
	comando_primo=0;
	resultado=0;
	contador=1;
	
	while (contador <=10) {
		
		contador++;
		
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		
		if (n%2 == 0) {
			
			comando_par= comando_par + n;
		}
		
		for (i=2 ; i<= n/2 ; i++) {
			
			if (n%i == 0) {
				
				resultado++;
			}
		}
		
		if (resultado == 0) {
			
			comando_primo=comando_primo + n;
		}
		
		else {
			
			printf("esse n�mero n�o � primo!\n\n");
		}
		resultado=0;
	}
	
	printf("a soma dos n�meros pares: %d \n\n",comando_par);
	printf("a soma dos n�meros primos: %d",comando_primo);
	
	
	return 0;
}
