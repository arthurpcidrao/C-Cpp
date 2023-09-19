#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//QUESTÃO 4  -  Arthur Paraiba Cidrão  -  510240

int r, k;

int recursao(int menor_possivel, int falta_r, int falta_k) {

   	int i;

   	if (falta_r == 0 && falta_k == 0) {
   		
   		return 1;
	}
	
   	if(falta_k == 0) {
   		
   		return 0;
	}
	
   	if(falta_r == 0) {
   		
   		return 0;
	}

   	int ans = 0;
   	
   	for(i=menor_possivel; i <= falta_r; i++) {
   		
      		ans += recursao(i + 1, falta_r - i, falta_k - 1);
   	}
   	return ans;
}

void main() {
	
   	scanf("%d %d",&r,&k);
   	
   	printf("%d",recursao(1,r,k));
}
