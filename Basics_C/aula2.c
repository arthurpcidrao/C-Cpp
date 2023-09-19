#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//#include <math.h>

int main(void) {
	
setlocale(LC_ALL, "Portuguese");

	float n1, n2, n3, m;
	
	printf("digite um número: ");
	scanf("%f",&n1);
	
	printf("digite outro número: ");
	scanf("%f",&n2);
	
	printf("digite outro número: ");
	scanf("%f",&n3);
	
m= (n1 + n2 + n3)/3	;


	printf("média: %.2f",m);
	
return 0;
}

