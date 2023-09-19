#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("   Equação: ax2 + bx + c = 0\n\n");
	
	printf("   Digite um número para a: ");
	scanf("%f",&a);
	
	printf("\n   Digite um número para b: ");
	scanf("%f",&b);
	
	printf("\n   Digite um número para c: ");
	scanf("%f",&c);
	
	printf("\n\n   %fx2 + %fx + %f = 0\n\n",a,b,c);
	
	float delta, x1, x2, x, y;
	
	delta= pow(b,2) - 4*a*c;
	x1= (-b + sqrt(delta))/(2*a);
	x2= (-b - sqrt(delta))/(2*a);
	x= (-b)/(2*a);
	y= (sqrt(fabs(delta)))/(2*a);
	
	printf("    delta= %.2f\n\n",delta);
	
	if (delta < 0) {
		
		printf("       As raizes complexas são:\n\n");
		
		printf("       x1= %f + (%f)i\n",x,fabs(y));
		
		printf("       x2= %f - (%f)i",x,fabs(y));
	}
	
	else {
		
		printf("       As raizes são:\n\n");
		
		printf("       x1= %f\n",x1);
		
		printf("       x2= %f",x2);
	}
	
	
	return 0;
	
}
