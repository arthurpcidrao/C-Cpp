#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, i;
	
	printf("Digite a quantidade de números que você deseja: ");
	scanf("%d",&n);
	
	float lista[n];
	float max;
	
	for (i=0; i<n; i++) {
		
		printf("Digite um número: ");
		scanf("%f",&lista[i]);
	
		if(i==0) {
			
			max=lista[i]; 
		}
		else {
			if (lista[i] >max) {
				
				max=lista[i];
			}
		}	
	}
	
	printf("\n\nO maior número é: %.2f",max);
	
	return 0;
}
