#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

//colocar vari�veis antes da fun��o principal (main)

int idade;
char nome[50];

float n1,n2,n3,media

// esse [50] diz quantas caracteres poder�o ser escritas


 int main(void) {

setlocale(LC_ALL, "Portuguese");

/* essa barra-estrela serve para abrir uma janela de coment�rios
   que pode ter mais de uma linha */ 
   
// colocando vari�veis

    printf("Digite sua idade:");
    scanf("%i",&idade);

    printf("Digite seu nome:");
    scanf("%s",&nome);

    printf("as informa��es coletadas foram: \n %i\n %s\n",idade,nome);
    
media= (n1 + n2 + n3)/3;
    
    printf("Digite sua primeira nota: ");
    scanf("%f",&n1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f",&n2);
    
    printf("Digite sua terceira nota: ");
    scanf("%f",&n3);
    
    printf("Sua m�dia � igual a %f",media);
    


}

