#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 2  -  Arthur Paraiba Cidrão  -  510240

void main () {
	
	setlocale(LC_ALL, "Portugues");
	char frase[150];
	
	int positivo, negativo, saldo;
	
	setbuf(stdin, NULL);
	scanf("%[^\n]",frase);
	
	positivo=0;
	negativo=0;
	
	if (strstr(frase,"arrochado") != NULL) {
		positivo++;
	}
	if (strstr(frase,"bichim") != NULL) {
		positivo++;
	}
	if (strstr(frase,"birita") != NULL) {
		positivo++;
	}
	if (strstr(frase,"arretado") != NULL) {
		positivo++;
	}
	if (strstr(frase,"cagado") != NULL) {
		positivo++;
	}
	if (strstr(frase,"espilicute") != NULL) {
		positivo++;
	}
	if (strstr(frase,"estribado") != NULL) {
		positivo++;
	}
	if (strstr(frase,"abirobado") != NULL) {
		negativo++;
	}
	if (strstr(frase,"corno") != NULL) {
		negativo++;
	}
	if (strstr(frase,"paia") != NULL) {
		negativo++;
	}
	if (strstr(frase,"abestado") != NULL) {
		negativo++;
	}
	if (strstr(frase,"apapagaiado") != NULL) {
		negativo++;
	}
	if (strstr(frase,"aperrear") != NULL) {
		negativo++;
	}
	if (strstr(frase,"arrumação") != NULL) {
		negativo++;
	}
	if (strstr(frase,"babão") != NULL) {
		negativo++;
	}
	if (strstr(frase,"bocó") != NULL) {
		negativo++;
	}
	
	saldo = positivo - negativo;
	
	if (saldo > 0) {
		
		printf("positivo");
	}
	else if (saldo = 0) {
		
		printf("neutro");
	}
	else if (saldo < 0) {
		
		printf("negativo");
	}
}
