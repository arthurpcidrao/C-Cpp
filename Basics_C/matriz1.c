#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, max;
	int matriz[2][2], nova_matriz[2][2];
	
	for (i=0; i<2; i++) {
		
		for (j=0; j<2; j++) {
			
			printf ("digite o %d-esima linha, %d-esima coluna da matriz:",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			
			if (i==0 && j==0) {
				
				max=matriz[i][j];
			}
			
			else {
				if (matriz[i][j] > max) {
					
					max=matriz[i][j];
				}
				
			}
		}
	}
	
	printf("O maior valor da matriz é %d",max);
	
	for (i=0; i<2; i++) {
		
		for (j=0; j<2; i++) {
			
			nova_matriz[i][j]=max*matriz[i][j];
		}
	}
	
	for (i=0; i<2; i++) {
		
		for (j=0; j<2; j++) {
			
			printf("%d \n", nova_matriz[i][j]);
		}
	}
	
	return 0;
}
