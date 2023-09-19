#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUEST�O 2  -  Arthur Paraiba Cidr�o  -  510240

/*
Fa�a um programa contendo os servi�os que uma oficina mec�nica realiza. Uma 
ordem de servi�o � composta pelas seguintes informa��es: n�mero da OS, data, valor, 
descri��o do servi�o realizado e nome do cliente. Leia as informa��es sobre v�rias 
ordens de servi�o e determine, ao final: 

a) a m�dia dos valores dos servi�os realizados e 
b) o nome do cliente que realizou o servi�o mais caro, juntamente com a descri��o 
desse servi�o e a data de sua realiza��o.
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
		
		printf("Descri��o do servi�o: ");
		setbuf(stdin,NULL);
		gets(dados[i].descricao);
		
		printf("\nVoc� deseja cadastrar mais um servi�o?\n  digite exatamente 'sim' ou 'nao'\n\n");
		scanf("%s",&escolha);
		
		if (strcmp(escolha,"sim") == 0) {
			
			i++;
		}
	}
	setbuf(stdin,NULL);
	n=i+1;
	media_valores=media_valores/n;
	printf("\nM�dia de pre�os: R$ %.2f",media_valores);
	printf("\n\nNome do cliente: %s",dados[j].nome);
	printf("\nData do servi�o mais caro: %s",dados[j].data);
	printf("\nDescri��o do servi�o: %s",dados[j].descricao);
}
