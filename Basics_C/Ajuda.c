#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main () {
	
	char frase[100], limite[30];
	int i, n, j, tamanho, k;
	
	setbuf(stdin, NULL);
	gets(frase);
	
	tamanho=strlen(frase);
	
	n= tamanho - 30;
	
	if (n >= 0) {
		
		for (i=0; i<30; i++) {
			
			limite[i] = frase[n + i];
		}
		printf("%s",limite);
	}
	
	else if (n < 0) {
		
		
	}
}
