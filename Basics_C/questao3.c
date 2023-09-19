#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, idade, m1, m2, m3, m4;
	float peso, lista1[15], lista2[15], lista3[15], lista4[15], p1, p2, p3, p4;
	
	m1=0;
	m2=0;
	m3=0;
	m4=0;
	
	for (n=0; n<15; n++) {
		
		printf("Digite sua idade: ");
		scanf("%d",&idade);
		
		printf("Digite seu peso: ");
		scanf("%f",&peso);
		
		printf("\n");
		
		if (idade>=1 && idade<=10) {
			
			m1++;
			lista1[n]=peso;
		}
		
		if (idade>=11 && idade<=20) {
			
			m2++;
			lista2[n]=peso;
		}
		
		if (idade>=21 && idade<=30) {
			
			m3++;
			lista3[n]=peso;
		}
		
		if (idade>30) {
			
			m4++;
			lista4[n]=peso;
		}
				
	}
	
	p1=0;
	p2=0;
	p3=0;
	p4=0;
	
	for (n=0; n<15; n++) {
		
		p1= p1 + lista1[n];
		
		p2= p2 + lista2[n];
		
		p3= p3 + lista3[n];
		
		p4= p4 + lista4[n];
	}
	
	if (m1 != 0){
		printf("\n\nMédia de peso das pessoas de 1 a 10 anos: %.2f",p1/m1);
	}
	if (m2 != 0){
		printf("\n\nMédia de peso das pessoas de 11 a 20 anos: %.2f",p2/m2);
	}
	if (m3 != 0){
		printf("\n\nMédia de peso das pessoas de 21 a 30 anos: %.2f",p3/m3);
	}
	if (m4 != 0){
		printf("\n\nMédia de peso das pessoas com mais de 30 anos: %.2f",p4/m4);
	}
	
	
	return 0;
	
	
}
