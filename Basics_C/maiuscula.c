#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main () {
	
	char frase[100];
	
	gets(frase);
	
	printf("%s",strupr(frase));
}
