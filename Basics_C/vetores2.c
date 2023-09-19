#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int lista[15], i, n;
	
	n=0;
	
	for (i=0; i<15; i++) {
		
		printf("valor: ");
		scanf("%d",&lista[i]);
	}
	
	for (i=0; i<15; i++) {
		
		if (lista[i] == 30) {
			
			n++;
			printf("\nNa posição %d existe um número 30",i);
		}
	}
	
	printf("\ntemos %d valores iguais a 30.", n);
	
	return 0;
}
