#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float total;
	int n;
	
	printf("-------------------------------\n");
	printf("(1)- comida 1   R$14,99\n");
	printf("(2)- comida 2   R$5,90\n");
	printf("(3)- comida 3   R$7,50\n");
	printf("(4)- comida 4   R$3,50\n");
	printf("(5)- comida 5   R$19,99\n\n");
	printf("(0)- encerrar\n");
	printf("-------------------------------\n\n\n");
	
	total= 0;
	
	
	while (n != 0) {
		
		printf("Qual o seu pedido: ");
	          scanf("%d",&n);
		
		if (n==1) {
			
			total=total + 14.99;
			
	          }
		
		if (n==2) {
			
			total=total + 5.90;
			
		}
		
		if (n==3) {
			
			total=total + 7.50;
			
		}
		
		if (n==4) {
			
			total=total + 3.50;
			
		}
		
		if (n==5) {
			
			total=total + 19.99;
			
		}
				
	}
	
	printf("\n\n Total= %.2f",total);
	
	
	return 0;
}

