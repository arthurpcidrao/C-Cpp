#include <stdio.h>
#include <time.h>

int main () {
	
	int i;
	
	printf("Testando o delay\n\n");
	
	for (i=0; i<500; i++) {
		
		printf("%d ",i);
		sleep(0.5);  // ta em segundos
	
	}
	
	return 0;
}
