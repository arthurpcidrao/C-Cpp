#include <stdio.h>
#include <locale.h>
#include <time.h>

int main () {
	
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int r, n;
	
	r= 1 + (rand() % 100);     // rand() � um n�mero aleat�rio e % 1000 mostra o resto da divis�o, o que acaba limitando o n�mero r.
	
	printf("Descubra o n�mero aleat�rio escolhido entre 1 e 100\n\n");
	
	while (n != r) {
		
		printf("Tente um n�mero: ");
	          scanf("%d",&n);
	          
	          if (n>r) {
	          	
	          	printf("\nsua tentativa foi maior que o n�mero!\n\n");
		}
		
		if (n<r) {
			
			printf("\nsua tentativa foi menor que o n�mero!\n\n");
		}
		
	}
	
	printf("\nMuito bem! Voc� acertou o n�mero!!");
	
	return 0;
}
