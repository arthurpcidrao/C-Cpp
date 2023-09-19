//Questão 4 - Arthur Paraiba Cidrão

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mmc(int vetor[], int n) {
	
	int i, j, k, aux, diva, mdc1, mdc2;
	
	for (i=0; i<n; i++) {
		for (j=i+1; j<n; j++) {
			
			if (vetor[i]>vetor[j]) {
				
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}
	
	mdc1=1;
	mdc2=1;
	for(k=1; k<=vetor[0]; k++) {
		
		for (i=0; i<n; i++) {
			
			if (vetor[0]%k==0 && vetor[1]%k==0) {
			
				mdc1=k;
			}
			if (vetor[2]%k==0 && vetor[3]%k==0) {
				
				mdc2=k;
			}
		}
	}
	
	return (vetor[0]*vetor[1])/(mdc1)*(vetor[2]*vetor[3])/(mdc2);
}

void main () {
	
	int n, vetor[50], resultado, i;
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++) {
		
		scanf("%d",&vetor[i]);
	}
	
	resultado=mmc(vetor, n);
	
	printf("%d",resultado);
}
