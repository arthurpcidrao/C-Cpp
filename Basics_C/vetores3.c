#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int lista[10], vetp[10], veti[10], i, z, w;
	
	for (i=0; i<10; i++) {
		
		printf("Digite um número: ");
		scanf("%d",&lista[i]);
	}
	
	for (i=0; i<10; i++) {
		
		
		if (lista[i]%2 != 0) {
			
			veti[i]=lista[i];
		}
		
		else {
			
			vetp[i]=lista[i];
		}
	}
	
	printf("\nVetor par: ");
	for (z=0; z<10; z++) {
		
		printf("%d | ",vetp[z]);
	}
	
	printf("\nVetor impar: ");
	for (w=0; w<10; w++) {
		
		printf("%d | ",veti[w]);
	}
	
	return 0;
}
	
