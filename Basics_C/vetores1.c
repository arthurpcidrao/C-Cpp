#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int lista[7], i, n2, n3, n6;
	
	n2=0;
	n3=0;
	n6=0;
	
	for (i=0; i<7 ;i++) {
		
		printf("Digite um n�mero: ");
		scanf("%d",&lista[i]);
	}
	
	for (i=0; i<7 ;i++) {
		
		if (lista[i]%2 == 0) {
			
			n2++;
		}
		
		if (lista[i]%3 == 0) {
			
			n3++;
		}
		
		if (lista[i]%6 == 0) {
			
			n6++;
		}
	}
	
	printf("\nN�meros divis�veis por 2: %d\nN�meros divis�veis por 3: %d\nN�meros divis�veis por 6: %d\n",n2,n3,n6);
	
	return 0;
}
	

