#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 1  -  Arthur Paraiba Cidrão  -  510240

/*
A prefeitura de Fortaleza fez uma pesquisa entre seus habitantes, coletando dados 
sobre salário, idade, sexo e número de filhos. Faça um programa que leia esses dados de 
20 pessoas e mostre:

a) A média de salário da população;
b) A média do número de filhos;
c) O maior salário;
d) O percentual de mulheres com salário superior a R$ 10.000,00
*/

void main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	struct registro {
		
		float salario;
		int idade;
		char sexo[15];
		int filhos;
	};
	
	float media_salarios, media_filhos, maior_salario, percentual;
	int i, n, cont1, cont2;
	
	printf("Quantas pessoas você quer avaliar: ");  //Coloquei essa entrada a mais para possibilitar testes mais rápidos
	scanf("%d",&n);                                 //Para obter o n da questão, basta digitar 20.
	printf("\n\n");
	struct registro dados[n];
	
	media_salarios = 0;
	media_filhos = 0;
	maior_salario = 0;
	cont1 = 0;
	cont2 = 0;
	for (i=0; i<n; i++) {
		
		printf("Digite os dados da pessoa %d\n\n",i+1);
		
		printf("Salário: ");
		scanf("%f",&dados[i].salario);
		
		media_salarios = media_salarios + dados[i].salario;
		
		if (dados[i].salario > maior_salario) {
			
			maior_salario = dados[i].salario;
		}
		
		printf("Idade: ");
		scanf("%d",&dados[i].idade);
		
		printf("Sexo (digite exatamente 'masculino' ou 'feminino'): ");
		scanf("%s",&dados[i].sexo);
		
		if (strcmp(dados[i].sexo,"feminino") == 0  &&  dados[i].salario > 10000) {
			
			cont1++;
		}
		
		if (strcmp(dados[i].sexo,"feminino") == 0) {
			
			cont2++;
		}
		
		printf("Quantos filhos: ");
		scanf("%d",&dados[i].filhos);
		
		media_filhos = media_filhos + dados[i].filhos;
		
		printf("\n\n");
	}
	
	media_salarios = media_salarios/n;
	media_filhos = (1.0*media_filhos)/n;
	percentual = (100.0*cont1)/cont2;
	
	printf("\n\nMédia de salário da população: R$ %.2f",media_salarios);
	printf("\nMédia do número de filhos: %.2f",media_filhos);
	printf("\nO maior salário: R$ %.2f",maior_salario);
	printf("\nO percentual de mulheres com salário superior a R$ 10.000,00: %.2f%%",percentual);
	
}



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





#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 3  -  Arthur Paraiba Cidrão  -  510240

/*
Faça um programa que leia o código, a descrição, o valor e a quantidade em estoque 
de 10 produtos comercializados por uma papelaria. Essas informações devem ser 
armazenadas em um registro do tipo vetor em ordem crescente de código.
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
		
		printf("Código: ");
		scanf("%d",&dados[i].codigo);
		
		printf("Descrição do produto: ");
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
	printf("\n\nProdutos em ordem crescente de código\n");
	
	for (i=0; i<10; i++) {
		
		printf("\nCódigo: %d",dados[i].codigo);
		printf("\nDescrição do produto: %s",dados[i].descricao);
		printf("\nValor: R$ %.2f",dados[i].valor);
		printf("\nQuantidade em estoque: %d",dados[i].quantidade);
		
		printf("\n\n");
	}
}
