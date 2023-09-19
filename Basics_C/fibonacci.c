#include <stdio.h>
#include <locale.h>
#include <math.h>

//1.10
int main () {
	
	setlocale(LC_ALL, "Portuguese");

	double a, b, resultado;
	int i, n;
	printf("Digite o número de termos que você quer: ");
	scanf("%d",&n);
	
	a=1;
	b=1;
	resultado=a+b;
	
	if (n<=3){
		
		printf("%.0f, %.0f, %.0f, ",a,b,resultado);
	}
	
	else {
		printf("1, 1, ");
		for (i=0; i<n; i++) {
			
			resultado=b+a;
			b=a;
			a=resultado;
			printf("%.0f, ",resultado);
		}
	}

	return 0;
}
