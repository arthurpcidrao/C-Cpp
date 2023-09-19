#include <stdio.h>
#include <locale.h>
#include <time.h>

int main () {
	
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int r, n;
	
	r= 1 + (rand() % 100);     // rand() é um número aleatório e % 1000 mostra o resto da divisão, o que acaba limitando o número r.
	
	printf("Descubra o número aleatório escolhido entre 1 e 100\n\n");
	
	while (n != r) {
		
		printf("Tente um número: ");
	          scanf("%d",&n);
	          
	          if (n>r) {
	          	
	          	printf("\nsua tentativa foi maior que o número!\n\n");
		}
		
		if (n<r) {
			
			printf("\nsua tentativa foi menor que o número!\n\n");
		}
		
	}
	
	printf("\nMuito bem! Você acertou o número!!");
	
	return 0;
}
