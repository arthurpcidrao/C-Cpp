#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");

int x, y, z;

   printf("Digite o número x: ");
   scanf("%d",&x);
   
   printf("Digite o número y: ");
   scanf("%d",&y);
   
   printf("Digite o número Z: ");
   scanf("%d",&z);
   
   
         if ( (x>y && x<z) || (x<y && x>z) ) {
         	printf("%d é o número do meio.",x);
         }
         
         if ((y>x && y<z) || (y<x && y>z) ) {
         	printf("%d é o número do meio.",y);
         }
	
         if ((z>x && z<y) || (z<x && z>y) ) {
         	printf("%d é o número do meio.",z);
         }
         
         return 0;
}
