#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	
	int vetor[6], matriz[4][4], i, j, k, n;
	
	for (i=0; i<6; i++) {
		
		scanf("%d",&vetor[i]);
	}
	
	for (i=0; i<4; i++) {
		for (j=0; j<4; j++) {
			
			scanf("%d",&matriz[i][j]);
		}
	}
	
	n=0;
	for (i=0; i<4; i++) {
		for (j=0; j<4; j++) {
			
			for (k=0; k<6; k++) {
				
				if (vetor[k] == matriz[i][j]) {
					
					n++;
				}
			}
		}
	}
	
	printf("%d",n);
}
