#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main () {
	
	char completo[100], lastname[100], complementar[100];
	int tamcomp, tamlastname, tamcomplementar, i;
	
	gets(completo);
	
	tamcomp=strlen(completo);
	
	for (i=0; i<tamcomp; i++) {
		
		if (completo[i] == ' ') {
			break;
		}
		else {
			lastname[i]=completo[tamcomp -1 -i];
		}
	}
	
	strrev(lastname);
	
	tamlastname=strlen(lastname);
	
	for (i=0; i<tamcomp - tamlastname -1; i++) {
		
		complementar[i]=completo[i];
	}
	
	strcat(lastname,", ");
	strcat(lastname,complementar);
	
	printf("%s",lastname);
	
}
