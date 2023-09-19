#include <stdio.h>
#include <math.h>

int main () {
	
	float a, b, c, delta, raiz, raiz1, raiz2;
	
	printf ("ax² + bx + c = 0");
	
	printf("\n\nDigite a b c:");
	scanf("%f %f %f", &a, &b, &c);
	
	delta= b*b - 4*a*c;
	
	if (delta < 0) {
		
		raiz= (sqrt(abs(delta)))/(2*a);
		raiz1= b/(2*a);
		
		printf("\n\nraiz1 = %f + i%f", raiz1,raiz);
		printf("\nraiz2 = %f - i%f",raiz1,raiz);
	}
	
	else {
		
		raiz1= (sqrt(delta) + b)/(2*a);
		raiz2= (-sqrt(delta) + b)/(2*a);
		
		printf("\n\nraiz1 = %f", raiz1);
		printf("\nraiz2 = %f", raiz2);
	}
}
