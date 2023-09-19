//Questão 5 - Arthur Paraiba Cidrão

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	
	int n, L, C, x1, x2, y1, y2;
	
	scanf("%d",&n); // n é par.
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	
	L=n/2;
	C=n/2;
	
	if (x1 <= L && y1 <= C && x2 <= L && y2 <= C) {
		
		printf("N");
	}
	else if (x1 <= L && y1 > C && x2 <= L && y2 > C) {
		
		printf("N");
	}
	else if (x1 > L && y1 <= C && x2 > L && y2 <= C) {
		
		printf("N");
	}
	else if (x1 > L && y1 > C && x2 > L && y2 > C) {
		
		printf("N");
	}
	
	else {
		printf("S");
	}
}
