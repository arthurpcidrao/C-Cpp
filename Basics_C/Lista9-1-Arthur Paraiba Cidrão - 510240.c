#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUEST�O 1  -  Arthur Paraiba Cidr�o  -  510240

/*
A prefeitura de Fortaleza fez uma pesquisa entre seus habitantes, coletando dados 
sobre sal�rio, idade, sexo e n�mero de filhos. Fa�a um programa que leia esses dados de 
20 pessoas e mostre:

a) A m�dia de sal�rio da popula��o;
b) A m�dia do n�mero de filhos;
c) O maior sal�rio;
d) O percentual de mulheres com sal�rio superior a R$ 10.000,00
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
	
	printf("Quantas pessoas voc� quer avaliar: ");  //Coloquei essa entrada a mais para possibilitar testes mais r�pidos
	scanf("%d",&n);                                 //Para obter o n da quest�o, basta digitar 20.
	printf("\n\n");
	struct registro dados[n];
	
	media_salarios = 0;
	media_filhos = 0;
	maior_salario = 0;
	cont1 = 0;
	cont2 = 0;
	for (i=0; i<n; i++) {
		
		printf("Digite os dados da pessoa %d\n\n",i+1);
		
		printf("Sal�rio: ");
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
	
	printf("\n\nM�dia de sal�rio da popula��o: R$ %.2f",media_salarios);
	printf("\nM�dia do n�mero de filhos: %.2f",media_filhos);
	printf("\nO maior sal�rio: R$ %.2f",maior_salario);
	printf("\nO percentual de mulheres com sal�rio superior a R$ 10.000,00: %.2f%%",percentual);
	
}
