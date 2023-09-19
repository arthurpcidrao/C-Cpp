#include <stdio.h>
#include <math.h>
#include <locale.h>

void main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma, subtracao, multiplicacao;
	char operacao[15];
	
	printf("Claculadora: \n\n");
	
	printf("Digite um número: ");
	scanf("%d",&n1);
	
	printf("Digite um outro número: ");
	scanf("%d",&n2);
	
	printf("Digite uma operação: ");
	scanf("%s",&operacao);
	
	if (strcmp(operacao,"soma") == 0) {
		
		soma=n1+n2;
		printf("\n\nResultado: %d",soma);
	}
	
	if (strcmp(operacao,"subtracao") == 0) {
		
		subtracao= n1-n2;
		printf("\n\nResultado: %d",subtracao);
	}
	
	if (strcmp(operacao,"multiplicacao") == 0) {
		
		multiplicacao=n1*n2;
		printf("\n\nResultado: %d",multiplicacao);
	}
}
