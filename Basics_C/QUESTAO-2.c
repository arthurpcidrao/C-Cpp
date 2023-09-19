
// QUESTÃO 2 - Arthur Paraiba Cidrão - 510240

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {   //usar o floor()
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Normal:  1 2 3 4 5 6 7 8 9\nCifrado: 4 5 6 7 8 9 1 2 3");

	int n, contador, z, a, b, c, d, e, f, g, h, i;
	int normal[9], cifrado[9];
	
	printf("\n\nDigite um número cifrado de até 9 dígitos (sem incluir o zero): ");
	scanf("%d",&n);
	
	a= floor(n/100000000);
	b= floor(n/10000000 - 10*a);
	c= floor(n/1000000 - 10*b - 100*a);
	d= floor(n/100000 - 10*c - 100*b - 1000*a);
	e= floor(n/10000 - 10*d - 100*c - 1000*b - 10000*a);
	f= floor(n/1000 - 10*e - 100*d - 1000*c - 10000*b - 100000*a);
	g= floor(n/100 - 10*f - 100*e - 1000*d - 10000*c - 100000*b - 1000000*a);
	h= floor(n/10 - 10*g - 100*f - 1000*e- 10000*d - 100000*c - 1000000*b - 10000000*a);
	i= floor(n - 10*h - 100*g - 1000*f- 10000*e - 100000*d - 1000000*c - 10000000*b - 100000000*a);
	
	printf("\n\nNormal: ");
	
	if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0 && f!=0 && g!=0 && h!=0 && i!=0) {
		
		cifrado[0]= a;
		cifrado[1]= b;
		cifrado[2]= c;
		cifrado[3]= d;
		cifrado[4]= e;
		cifrado[5]= f;
		cifrado[6]= g;
		cifrado[7]= h;
		cifrado[8]= i;
		
		for (z=0; z<9; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b!=0 && c!=0 && d!=0 && e!=0 && f!=0 && g!=0 && h!=0 && i!=0) {
		
		cifrado[0]= b;
		cifrado[1]= c;
		cifrado[2]= d;
		cifrado[3]= e;
		cifrado[4]= f;
		cifrado[5]= g;
		cifrado[6]= h;
		cifrado[7]= i;
		
		for (z=0; z<8; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b==0 && c!=0 && d!=0 && e!=0 && f!=0 && g!=0 && h!=0 && i!=0) {
		
		cifrado[0]= c;
		cifrado[1]= d;
		cifrado[2]= e;
		cifrado[3]= f;
		cifrado[4]= g;
		cifrado[5]= h;
		cifrado[6]= i;
		
		for (z=0; z<7; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b==0 && c==0 && d!=0 && e!=0 && f!=0 && g!=0 && h!=0 && i!=0) {
		
		cifrado[0]= d;
		cifrado[1]= e;
		cifrado[2]= f;
		cifrado[3]= g;
		cifrado[4]= h;
		cifrado[5]= i;
		
		for (z=0; z<6; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b==0 && c==0 && d==0 && e!=0 && f!=0 && g!=0 && h!=0 && i!=0) {
		
		cifrado[0]= e;
		cifrado[1]= f;
		cifrado[2]= g;
		cifrado[3]= h;
		cifrado[4]= i;
		
		for (z=0; z<5; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b==0 && c==0 && d==0 && e==0 && f!=0 && g!=0 && h!=0 && i!=0) {
		
		cifrado[0]= f;
		cifrado[1]= g;
		cifrado[2]= h;
		cifrado[3]= i;
		
		for (z=0; z<4; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g!=0 && h!=0 && i!=0) {
		
		cifrado[0]= g;
		cifrado[1]= h;
		cifrado[2]= i;
		
		for (z=0; z<3; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h!=0 && i!=0) {
		
		cifrado[0]= h;
		cifrado[1]= i;
		
		for (z=0; z<2; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==0 && i!=0) {
		
		cifrado[0]= i;
		
		for (z=0; z<1; z++) {
			
			if (cifrado[i] <=6) {
				
				normal[i]=cifrado[i] + 3;
				printf("%d",normal[z]);
			}
			if (cifrado[i]>6) {
				
				normal[i]=cifrado[i] + 4 -10;
				printf("%d",normal[z]);
			}
			
		}
	}
	
	return 0;
}
