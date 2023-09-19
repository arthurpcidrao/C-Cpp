#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	char questao[500];
	
	scanf ( "%[^\n]", questao);
	
	strupr(questao);
	
	printf("%s",questao);
}
