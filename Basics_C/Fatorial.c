#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	double fat;
	int i,n;
	
	fat= 1;
	printf("Esse programa diz o fatorial de um número inteiro entre 1 e 170.\n\n");
	printf("digite um número n de 1 a 170: ");
	scanf("%d",&n);
	
	for (i=n ; i>1 ;i--) {
		
		fat=fat*i;
	}
	
	printf("\n\nO fatorial de %d é \n%.0f",n,fat);
	
	
	return 0;
	
	//poderia ser feito com while.
	
	/*i=2;
	while (i<=n) {
		
		i--;
		fat=fat*i;
	}
	*/
}
