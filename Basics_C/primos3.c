#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, contador, i, resultado, primo;
	
	contador=1;
	resultado=0;
	primo=0;
	
	while (contador <= 10) {
		
		contador++;
		
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		
		for (i=2 ; i<= n/2 ; i++) {
			
			if( n%i == 0) {
				resultado++;
			}
			
		}
		
		if (resultado == 0) {
			
			primo++;
			
		}
		
		else {
			
			printf("n�o � primo!\n\n");
		}
		resultado=0;
	}
	
	printf("\n\nN�mero de primos: %d",primo);
	
	
	return 0;
}
