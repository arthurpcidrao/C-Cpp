#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");

	int a, b, c;
	float x, y, z, w;
	
	z=x*180/3.1415;
	w=y*180/3.1415;
	
	printf("Digite o lado A do tri�ngulo: ");
	scanf("%d",&a);
	
	printf("Digite o lado B do tri�ngulo: ");
	scanf("%d",&b);
	
	printf("Digite o lado C do tri�ngulo: ");
	scanf("%d",&c);
	
	if (a<b+c && b<a+c && c<a+b) {
		
		if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
			
			printf("� um tri�ngulo ret�ngulo!");
			
			if (a>b && a>c) {
				
				x=asin(b/a);
				y=asin(c/a);
				printf("\n\n�ngulos: 90�; %.2f �; %.2f �",z,w);
			}
			if (b>a && b>c) {
				
				x=asin(a/b);
				y=asin(c/b);
				printf("\n\n�ngulos: 90�; %.2f �; %.2f �",z,w);
			}
			if (c>a && c>b) {
				
				x=asin(a/c);
				y=asin(b/c);
				printf("\n\n�ngulos: 90�; %.2f �; %.2f �",z,w);
			}
			
		}
		if (a*a < b*b + c*c && b*b < a*a + c*c && c*c < a*a + b*b) {
			
			printf("� um tri�ngulo acut�ngulo!");
			return 0;
		}
		if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b) {
			
			printf("� um tri�ngulo obtus�ngulo!");
			return 0;
		}
	}
	
	else {
		printf("\n\nN�o � possivel formar um tri�ngulo com os lados informados!");
	}

	return 0;
}

