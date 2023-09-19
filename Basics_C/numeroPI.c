#include <stdio.h>
#include <math.h>
#include <locale.h>

main () {
	
	int lista[5], i;
	
	for (i=0; i<5; i++) {
		printf("n: ");
		scanf("%d",&lista[i]);
	}
	
	for (i=0; i<4; i++) {
		
		printf("\n%d",lista[i]);
	}
	return 0;
}
