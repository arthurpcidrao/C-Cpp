//Questão 3 - Arthur Paraiba Cidrão

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funcao(int vetor[], int n, int x) {
	
	int j, cont;
	
	cont=0;
	for (j=0; j<n; j++) {
		
		if (vetor[j] == x) {
			
			cont++;
		}
	}
	
	if (cont != 0) {
		
		return 1;
	}
	
	if (cont == 0) {
		
		return 0;
	}
}

void main () {
	
	int i, n, vetor[50], x, resultado;
	
	scanf("%d",&x);
	scanf("%d",&n);
	
	for (i=0; i<n; i++) {
		
		scanf("%d",&vetor[i]);
	}
	
	resultado=funcao(vetor,n,x);
	
	printf("%d",resultado);

}
