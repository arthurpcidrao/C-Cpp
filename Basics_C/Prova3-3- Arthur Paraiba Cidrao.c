#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 3  -  Arthur Paraiba Cidrão  -  510240

int main () {
	
	int i, j, n;
	char string[100], string2[100], string3[100];
	
	setbuf(stdin, NULL);
	gets(string);
	
	// string sempre com tamanho par, ou seja: n/2 é inteiro.
	
	n = strlen(string);
	
	for (i=0; i<n/2; i++) {
		
		string2[i] = string[(n/2)-1-i];
	}
	
	for (i=0; i<n/2; i++) {
		
		string2[i + (n/2)] = string[n-1-i];
	}
	
	printf("%s",string2);
	return 0;
}
