//Questão 2 - Arthur Paraiba Cidrão

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	
	int matriz[6][6], i, j, col1, col2, col3, col4, col5, col6;
	int vetor[6], max;
	
	for (i=0; i<6; i++) {
		for(j=0; j<6; j++) {
			
			scanf("%d",&matriz[i][j]);
		}
	}
	
	col1=0;
	col2=0;
	col3=0;
	col4=0;
	col5=0;
	col6=0;
		
	for (i=0; i<6; i++) {
		
		if (matriz[i][0] != 0) {
			col1++;
		}
		if (matriz[i][1] != 0) {
			col2++;
		}
		if (matriz[i][2] != 0) {
			col3++;
		}
		if (matriz[i][3] != 0) {
			col4++;
		}
		if (matriz[i][4] != 0) {
			col5++;
		}
		if (matriz[i][5] != 0) {
			col6++;
		}
		
	}
	
	vetor[0]=col1;
	vetor[1]=col2;
	vetor[2]=col3;
	vetor[3]=col4;
	vetor[4]=col5;
	vetor[5]=col6;
	
	max=vetor[0];
	for (i=0; i<6; i++) {
		
		if (max < vetor[i]) {
			
			max=vetor[i];
		}
	}
	
	for (i=0; i<6; i++) {
		
		if (vetor[i] == max) {
			
			printf("%d ",i+1);
		}
	}
}
