#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int A[10], B[10], C[10], D[20], n, i, a, b, c;
	
	printf("Digite um número n: ");
	scanf("%d",n);
	
	for (i=0; i<sizeof(A)/sizeof(int); i++) {
		
		printf("Digite um número: ");
		scanf("%d",A[i]);
	}
	
	for (i=0; i<sizeof(B)/sizeof(int); i++) {
		
		printf("Digite um número: ");
		scanf("%d",B[i]);
	}
	
	for (i=0; i<sizeof(C)/sizeof(int); i++) {
		
		printf("Digite um número: ");
		scanf("%d",C[i]);
	}
	
	for (i=0; i<20; i++) {
		
		D[i] = A[i] - ( B[i] + C[i]);
		
		printf("\n%d",D[i]);
	}

	
	return 0;
}
