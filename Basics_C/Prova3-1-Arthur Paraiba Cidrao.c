#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 1  -  Arthur Paraiba Cidrão  -  510240

void main () {
   
   	int i, j, k, n, m, tam;
   
   	scanf("%d %d",&n,&m);
   
   	char string[m][100];
   
   	char letra[n][4];
   	char decodificar[300];
   	
   	for(i = 0; i < 300; i++) {
   	
   		decodificar[i] = i;
   	}
   
   	for (i=0; i<n; i++) {
      
      		setbuf(stdin, NULL);
      		gets(letra[i]);
      		decodificar[letra[i][0]] = letra[i][2];
      		decodificar[letra[i][2]] = letra[i][0];
   	}
   
   	for (j=0; j<m; j++) {
      
      		setbuf(stdin, NULL);
      		gets(string[j]);
   	}
   
   	for (j=0; j<m; j++) {   //cada frase
      
      		tam=strlen(string[j]);
      
      		for (k=0; k<tam; k++) {   //varrendo a frase
         			string[j][k] = decodificar[string[j][k]];
      		}
   	}
      
   	for (j=0; j<m; j++) {
      
      		printf("%s",string[j]);
      		printf("\n");
   	}
}
