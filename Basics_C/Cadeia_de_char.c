#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#include <string.h>
#include <ctype.h>

void main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	char str[30];
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	
	itoa(n,str,2);  // n�mero, string, base num�rica.
	
	printf("\nN�mero representado por uma string: %s",str);
	
}
