#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");

int x, y, z;

   printf("Digite o n�mero x: ");
   scanf("%d",&x);
   
   printf("Digite o n�mero y: ");
   scanf("%d",&y);
   
   printf("Digite o n�mero Z: ");
   scanf("%d",&z);
   
   
         if ( (x>y && x<z) || (x<y && x>z) ) {
         	printf("%d � o n�mero do meio.",x);
         }
         
         if ((y>x && y<z) || (y<x && y>z) ) {
         	printf("%d � o n�mero do meio.",y);
         }
	
         if ((z>x && z<y) || (z<x && z>y) ) {
         	printf("%d � o n�mero do meio.",z);
         }
         
         return 0;
}
