#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//#include <math.h>

int main(void) {
	
setlocale(LC_ALL, "Portuguese");

	float n1, n2, n3, m;
	
	printf("digite um n�mero: ");
	scanf("%f",&n1);
	
	printf("digite outro n�mero: ");
	scanf("%f",&n2);
	
	printf("digite outro n�mero: ");
	scanf("%f",&n3);
	
m= (n1 + n2 + n3)/3	;


	printf("m�dia: %.2f",m);
	
return 0;
}

