#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 2  -  Arthur Paraiba Cidrão  -  510240

/*
Faça um programa contendo os serviços que uma oficina mecânica realiza. Uma 
ordem de serviço é composta pelas seguintes informações: número da OS, data, valor, 
descrição do serviço realizado e nome do cliente. Leia as informações sobre várias 
ordens de serviço e determine, ao final: 

a) a média dos valores dos serviços realizados e 
b) o nome do cliente que realizou o serviço mais caro, juntamente com a descrição 
desse serviço e a data de sua realização.
*/

void main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	struct registro {
		
		char nome[50];
		int os;
		char data[15];
		float valor;
		char descricao[200];
	};
	
	int i, n, j;
	float media_valores, maior_valor;
	struct registro dados[100];
	char escolha[4];
	
	maior_valor = 0;
	media_valores = 0;
	i = 0;
	while (strcmp(escolha,"nao") != 0) {
		
		printf("Digite os dados do cliente %d\n\n",i+1);
		
		printf("Nome do cliente: ");
		setbuf(stdin,NULL);
		gets(dados[i].nome);
		
		printf("Digite o OS: ");
		scanf("%d",&dados[i].os);
		
		printf("Data: ");
		scanf("%s",&dados[i].data);
		
		printf("Valor: R$ ");
		scanf("%f",&dados[i].valor);
		
		media_valores = media_valores + dados[i].valor;
		
		if (dados[i].valor > maior_valor) {
			
			maior_valor=dados[i].valor;
			j=i;
		}
		
		printf("Descrição do serviço: ");
		setbuf(stdin,NULL);
		gets(dados[i].descricao);
		
		printf("\nVocê deseja cadastrar mais um serviço?\n  digite exatamente 'sim' ou 'nao'\n\n");
		scanf("%s",&escolha);
		
		if (strcmp(escolha,"sim") == 0) {
			
			i++;
		}
	}
	setbuf(stdin,NULL);
	n=i+1;
	media_valores=media_valores/n;
	printf("\nMédia de preços: R$ %.2f",media_valores);
	printf("\n\nNome do cliente: %s",dados[j].nome);
	printf("\nData do serviço mais caro: %s",dados[j].data);
	printf("\nDescrição do serviço: %s",dados[j].descricao);
}
