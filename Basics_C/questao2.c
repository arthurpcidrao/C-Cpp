#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, s, i, m2, m3, m4;
	
	printf("Seu número é tal que 1<= n <= 1000");
	printf("\n\nSendo assim, seu número será da forma n= 1000xn1 + 100xn2 + 10xn3 + 1xn4");
	printf("\nPara isso, vamos coletar esses 4 números!\n");
	
	printf("\nDigite n1 (lembrando que n1 pode ser somente zero ou um): ");
	scanf("%d",&n1);
	
	
	if (n1 == 1) {
		
		//o número é 1000
		printf("\n\nSeu número é 1000 e serão necessários 20 leds!");
		return 0;
	}
	
	printf("Digite n2: ");
	scanf("%d",&n2);
	
	if (n2==0){
		m2=6;
	}
	if (n2==1){
		m2=2;
	}
	if (n2==2){
		m2=5;
	}
	if (n2==3){
		m2=5;
	}
	if (n2==4){
		m2=4;
	}
	if (n2==5){
		m2=5;
	}
	if (n2==6){
		m2=6;
	}
	if (n2==7){
		m2=3;
	}
	if (n2==8){
		m2=7;
	}
	if (n2==9){
		m2=6;
	}
	
	printf("Digite n3: ");
	scanf("%d",&n3);
	
	if (n3==0){
		m3=6;
	}
	if (n3==1){
		m3=2;
	}
	if (n3==2){
		m3=5;
	}
	if (n3==3){
		m3=5;
	}
	if (n3==4){
		m3=4;
	}
	if (n3==5){
		m3=5;
	}
	if (n3==6){
		m3=6;
	}
	if (n3==7){
		m3=3;
	}
	if (n3==8){
		m3=7;
	}
	if (n3==9){
		m3=6;
	}
	
	printf("Digite n4: ");
	scanf("%d",&n4);
	
	if (n4==0){
		m4=6;
	}
	if (n4==1){
		m4=2;
	}
	if (n4==2){
		m4=5;
	}
	if (n4==3){
		m4=5;
	}
	if (n4==4){
		m4=4;
	}
	if (n4==5){
		m4=5;
	}
	if (n4==6){
		m4=6;
	}
	if (n4==7){
		m4=3;
	}
	if (n4==8){
		m4=7;
	}
	if (n4==9){
		m4=6;
	}
	
	s= 6 + m2 + m3 + m4;
	
	printf("\n\nVocê necessitará de %d leds para o número 0%d%d%d",s,n2,n3,n4);
	
	return 0;
}
