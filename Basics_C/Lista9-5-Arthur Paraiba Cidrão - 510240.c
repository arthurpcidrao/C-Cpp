#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 5  -  Arthur Paraiba Cidrão  -  510240

/* 
Considere que uma boutique de luxo de Fortaleza precisa guardar informações sobre 
o funcionamento do seu negócio. Mais especificamente a boutique necessita armazenar:

a) Para cada Estilista deseja-se armazenar: código do estilista, nome do estilista, 
salário);
b) Para cada Estação Climática deseja-se guardar: código da estação, nome da 
estação;
c) Para cada Roupa comercializada pela boutique deseja-se armazenar: código da 
roupa, descrição da roupa, código do estilista, código da estação e ano.

Faça um programa que cadastre 5 estilistas, as 4 estações do ano e 10 roupas. Ao final, 
o programa deve imprimir os dados de todas as roupas de uma determinada estação 
sugerida pelo usuário.
*/

void main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int r_codigo, r_ano, r_est;
	char r_estilista[50], r_descricao[100];
	
	struct registro1 {
		
		int c_estilista;
		char nome_des[50];
		float salario;
	};
	
	struct registro2 {
		
		int c_estacao;
		char nome_est[15];
	};
	
	struct registro3 {
		
		int roupa;
		char descricao[100];
		int codigo_des;
		int codigo_est;
		int ano;
	};
	
	struct registro1 estilistas[3];
	struct registro2 estacoes[4];
	struct registro3 roupas[3];
	
	int i, j, k, cod_est;
	
	char desejo[15];
	
	printf("Dados sobre os estilistas\n\n\n");
	
	for (i=0; i<3; i++) {
		
		printf("estilista %d\n\n",i+1);
		
		printf("Código: ");
		scanf("%d",&estilistas[i].c_estilista);
		
		printf("Nome: ");
		setbuf(stdin,NULL);
		gets(estilistas[i].nome_des);
		
		printf("Salário: ");
		scanf("%f",&estilistas[i].salario);
		
		printf("\n\n");
	}
	
	printf("\n\nDados sobre as estações do ano\n\n\n");
	
	for (i=0; i<4; i++) {
		
		printf("%dª estação\n\n",i+1);
		
		printf("Código: ");
		scanf("%d",&estacoes[i].c_estacao);
		
		printf("Estação: ");
		scanf("%s",&estacoes[i].nome_est);
		
		printf("\n\n");
	}
	
	printf("\n\nDados sobre as roupas\n\n\n");
	
	for (i=0; i<3; i++) {
		
		printf("roupa %d\n\n",i+1);
		
		printf("Código: ");
		scanf("%d",&roupas[i].roupa);
		
		printf("Descrição: ");
		setbuf(stdin,NULL);
		gets(roupas[i].descricao);
		
		printf("Código do estilista: ");
		scanf("%d",&roupas[i].codigo_des);
		
		printf("Código da estação: ");
		scanf("%d",&roupas[i].codigo_est);
		
		printf("Ano: ");
		scanf("%d",&roupas[i].ano);
		
		printf("\n\n");
	}
	
	printf("\n\nQual estação você deseja ver (digite por extenso)\n outono\ninverno\nprimavera\nverao\n\n");
	setbuf(stdin,NULL);
	gets(desejo);
	
	for (i=0; i<4; i++) {
		
		if (strcmp(desejo,estacoes[i].nome_est) == 0) {
			
			cod_est=estacoes[i].c_estacao;
			
			for (j=0; j<3; j++) {
				
				if (cod_est == roupas[j].codigo_est) {
					
					r_codigo=roupas[j].roupa;
					r_ano=roupas[j].ano;
					strcpy(r_descricao,roupas[j].descricao);
					
					for (k=0; k<3; k++) {
						
						if (roupas[j].codigo_des == estilistas[k].c_estilista) {
							
							strcpy(r_estilista,estilistas[i].nome_des);
						}
					}
					
					printf("Coleção %s\n\n",desejo);
					printf("%d\n",r_codigo);
					printf("%s\n",r_descricao);
					printf("%d\n",r_ano);
					printf("Estilista %s",r_estilista);
	
					printf("\n\n");
				}
			}
		}
	}
}
