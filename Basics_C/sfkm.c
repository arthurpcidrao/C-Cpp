#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, k, n, comeco, fim, soma, acc;
	
	printf("Digite a quantidade de termos que você deseja analisar: ");
	scanf("%d",&n);
	
	int sequencia[n];
	
	printf("Valores do vetor (espaçadamente): ");
	
	for (i=0; i<n; i++) {
		
		scanf("%d",&sequencia[i]);
	}
	
	soma=0;
	comeco=0;
	fim=0;
	
	for (i=0; i<n; i++) {
		
		for (j=i; j<n; j++) {
			
			acc=0;
			
			for (k=i; k<j; k++) {
				acc= acc + sequencia[k];
			}
			
			if (acc>soma) {
				
				soma=acc;
				comeco=i;
				fim=j-1;
			}
		}
	}
	
	printf("De %d a %d. Soma total: %d\n",sequencia[comeco],sequencia[fim],soma);
	
	return 0;
}

