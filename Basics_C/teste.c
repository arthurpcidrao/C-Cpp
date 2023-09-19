#include <stdio.h>
#include <locale.h>
#include <math.h>
/*
//1.10
int main () {
	
	setlocale(LC_ALL, "Portuguese");

	double a, b, resultado;
	int i, n;
	printf("Digite o número de termos que você quer: ");
	scanf("%d",&n);
	
	a=1;
	b=1;
	resultado=a+b;
	
	if (n<=3){
		
		printf("%.0f, %.0f, %.0f, ",a,b,resultado);
	}
	
	else {
		printf("1, 1, ");
		for (i=0; i<n; i++) {
			
			resultado=a+b;
			a=b;
			b=resultado;
			printf("%.0f, ",resultado);
		}
	}

	return 0;
}


//1.9
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, i;
	
	printf("Digite o número de alunos: ");
	scanf("%d",&n);
	
	float lista1[n], lista2[n], lista3[n], listamax[n];
	float max1, max2, soma, media;
	
	for (i=0; i<n; i++) {
		
		printf("Digite a nota: ");
		scanf("%f",&lista1[i]);
	
		if(i==0) {
			
			max1=lista1[i]; 
		}
		else {
			if (lista1[i] >max1) {
				
				max1=lista1[i];
			}
		}	
	}
	for (i=0; i<n; i++){
		
		listamax[i]=max1;
	}
	
	for (i=0; i<n; i++) {

		if (lista1[i]==listamax[i]){
				
			lista2[i]=max1;
		}
		else {
			lista2[i]=0;
		}
	}
	
	for (i=0; i<n; i++) {
	
		lista3[i]=lista1[i]-lista2[i];
	}
	
	for (i=0; i<n; i++) {
		if(i==0) {
			
			max2=lista3[i]; 
		}
		else {
			if (lista3[i] >max2) {
				
				max2=lista3[i];
			}
		}
	}
	
	for (i=0; i<n; i++) {
		
		soma=soma + lista1[i];
	}
	
	media=soma/n;
	
	printf("\n1º maior nota: %.2f",max1);
	printf("\n2º maior nota: %.2f",max2);
	printf("\n\nMédia da turma: %.2f",media);
	
	return 0;
}



//1.5
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, i;
	
	printf("Digite a quantidade de números que você deseja: ");
	scanf("%d",&n);
	
	float lista[n];
	float max;
	
	for (i=0; i<n; i++) {
		
		printf("Digite um número: ");
		scanf("%f",&lista[i]);
	
		if(i==0) {
			
			max=lista[i]; 
		}
		else {
			if (lista[i] >max) {
				
				max=lista[i];
			}
		}	
	}
	
	printf("\n\nO maior número é: %.2f",max);
	
	return 0;
}


//1.11

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float ricci, a, b;
	int n, i;
	
	printf("Digite o número de termos que você quer imprimir (n>=3): ");
	scanf("%d",&n);
	
	printf("Digite o primeiro termo da sequência: ");
	scanf("%f",&a);
	printf("Digite o segundo termo da sequência: ");
	scanf("%f",&b);
	
	printf("\n");
	printf("%.0f, %.0f, ",a,b);
	
	for (i=0; i<n-2; i++) {
		
		ricci=a+b;
		a=b;
		b=ricci;
		
		printf("%.0f, ",ricci);
	}
	
	return 0;
}



//1.12
int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a1, a2, fett;
	int n, i;
	
	printf("Digite o número de termos que você quer imprimir (n>=3): ");
	scanf("%d",&n);
	
	printf("Digite o primeiro termo da sequência: ");
	scanf("%d",&a1);
	printf("Digite o segundo termo da sequência: ");
	scanf("%d",&a2);
	
	printf("\n");
	printf("%d, %d, ",a1,a2);
	
	for (i=3; i<=n; i++) {
		
		if (i%2 == 0) {
			
			fett=a2-a1;
			printf("%d, ",fett);
		}
		else {
			fett=a2+a1;
			printf("%d, ",fett);
		}
		
		a1=a2;
		a2=fett;
	}
	
	return 0;
}


//1.13
int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	float p;
	
	printf("Digite o número de termos que você deseja imprimir: ");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++) {
		
		p=pow(i,2);
		printf("%d² = %.0f\n",i,p);
	}
	return 0;
}


//1.14
int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, p1, p2, p3, m;
	
	printf("sequência: 1,4,4,2,5,5,3,6,6,4,7,7,...\n\n");
	
	printf("Digite o número de termos que você deseja imprimir (n>=3): ");
	scanf("%d",&n);

	m=abs(n/3);
		
	if (n%3==0) {
		
		for (i=1; i<=m; i++) {
		
		p1=i;
		p2=i+3;
		p3=i+3;
		
		printf("%d,%d,%d,",p1,p2,p3);
	}
	}
	if (n%3==1) {
		
		for (i=1; i<=m; i++) {
		
		p1=i;
		p2=i+3;
		p3=i+3;
		
		printf("%d,%d,%d,",p1,p2,p3);
	}
	printf("%d",p1+1);
	}
	if (n%3==2) {
		
		for (i=1; i<=m; i++) {
		
		p1=i;
		p2=i+3;
		p3=i+3;
		
		printf("%d,%d,%d,",p1,p2,p3);
	}
	printf("%d,%d",p1+1,p2+1);
	}
	
	return 0;
}
*/

//1.15
int main () {
	
	setlocale(LC_ALL, "Portuguese");

	int n, i;
	float termo, h;
	
	printf("H = 1 +1/2 + 1/3 + 1/4+ ... + 1/N\n\n");
	
	printf("Digite quantos termos você quer: ");
	scanf("%d",&n);
	
	h=0;
	
	for (i=1; i<=n; i++) {
		
		termo= 1.0/i;
		
		h=h+termo;		
	}
	
	printf("H=%.4f",h);
	
	return 0;
}
