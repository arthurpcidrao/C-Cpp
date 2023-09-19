#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main () {
	
	int n, i, j, aux;
	
	scanf("%d",&n);
	
	int vetor[n], cont;
	
	for (i=0; i<n; i++) {
		
		scanf("%d",&vetor[i]);
	}
	
	for (i=0; i<n; i++) {
		
		for (j=i; j<n; j++) {
			
			if (vetor[i] > vetor[j]) {
				
				aux = vetor[i];
				vetor[i] = vetor [j];
				vetor[j] = aux;
			}
		}
	}
	
	cont=0;
	for (i=0; i<n; i++) {
		for (j=i+1; j<n; j++) {
			
			if (vetor[i] == vetor[j]) {
				
				cont++;
				vetor[j] = 10000;

			}
			
		}
	}
	
	for (i=0; i<n; i++) {
		for (j=i; j<n; j++) {
			
			if (vetor[i] > vetor[j]) {
				
				aux = vetor[i];
				vetor[i] = vetor [j];
				vetor[j] = aux;
			}
		}
	}
	
	for (i=0; i<= n - cont; i++) {
		
		printf("%d ",vetor[i]);
	}
}
