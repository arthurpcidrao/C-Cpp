#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUEST�O 3  -  Arthur Paraiba Cidr�o  -  510240

/*
Fa�a um programa que leia o c�digo, a descri��o, o valor e a quantidade em estoque 
de 10 produtos comercializados por uma papelaria. Essas informa��es devem ser 
armazenadas em um registro do tipo vetor em ordem crescente de c�digo.
*/

void main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	struct registro {
		
		int codigo;
		char descricao[200];
		float valor;
		int quantidade;
	};
	
	int i, j, aux1, aux4;
	struct registro dados[10];
	char aux2[200];
	float aux3;
	
	printf ("Digite os dados de 10 produtos:\n\n");
	
	for (i=0; i<10; i++) {
		
		printf("Produto %d\n\n",i+1);
		
		printf("C�digo: ");
		scanf("%d",&dados[i].codigo);
		
		printf("Descri��o do produto: ");
		setbuf(stdin,NULL);
		gets(dados[i].descricao);
		
		printf("Valor: ");
		scanf("%f",&dados[i].valor);
		
		printf("Quantidade em estoque: ");
		scanf("%d",&dados[i].quantidade);
		
		printf("\n\n");
	}
	
	for (i=0; i<10; i++) {
		for (j=i; j<10; j++) {
			
			if (dados[i].codigo > dados[j].codigo) {
				
				aux1 = dados[i].codigo;
				dados[i].codigo = dados[j].codigo;
				dados[j].codigo = aux1;
				
				strcpy(aux2,dados[i].descricao);
				strcpy(dados[i].descricao,dados[j].descricao);
				strcpy(dados[j].descricao,aux2);
				
				aux3 = dados[i].valor;
				dados[i].valor = dados[j].valor;
				dados[j].valor = aux3;
				
				aux4 = dados[i].quantidade;
				dados[i].quantidade = dados[j].quantidade;
				dados[j].quantidade = aux4;
			}
		}
	}
	setbuf(stdin,NULL);
	printf("\n\nProdutos em ordem crescente de c�digo\n");
	
	for (i=0; i<10; i++) {
		
		printf("\nC�digo: %d",dados[i].codigo);
		printf("\nDescri��o do produto: %s",dados[i].descricao);
		printf("\nValor: R$ %.2f",dados[i].valor);
		printf("\nQuantidade em estoque: %d",dados[i].quantidade);
		
		printf("\n\n");
	}
}
