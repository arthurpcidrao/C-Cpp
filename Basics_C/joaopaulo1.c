#include <stdio.h>
#include <locale.h>
#include <math.h>

main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, j, s, p, k;
	
	j=1;
	s=0;
	p=0;
	k=0;
	
	while (j <= 10){
		
		j++;
		
		printf("Digite um número: ");
		scanf("%d",n);
		
		if (n%2 == 0){
			
			s=s+n;
		}
		
		for (i=2 ; i<= n/2 ; i++) {
			
			if (n%i==0) {
				
				k++;
			}
		}
		
		if (k==0) {
			
			p=p+n;
		}
		
		else {
			printf("Esse número não é primo!");
		}
		k=0;
	}
	
	printf("\nSoma dos pares: %d",s);
	printf("\nSoma dos primos: %d",p);
	
}

/*int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, comando_par, comando_primo, contador, i, resultado;
	
	comando_par=0;
	comando_primo=0;
	resultado=0;
	contador=1;
	
	while (contador <=10) {
		
		contador++;
		
		printf("Digite um número: ");
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
			
			printf("esse número não é primo!\n\n");
		}
		resultado=0;
	}
	
	printf("a soma dos números pares: %d \n\n",comando_par);
	printf("a soma dos números primos: %d",comando_primo);
	
	
	return 0;
}*/
