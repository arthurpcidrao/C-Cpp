#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int i, n, j, soma;
    soma=0;
    printf("Insira o n�mero n:");
    scanf("%d%*c", &n);
    
    if (n>20){
        printf("\nImposs�vel fazer tal opera��o");
    }
    
    double x[10], a[n+1], p[10];
    
    
    for (i=0; i<=n; i++) {
        printf("\nInsira o coeficiente a para o expoente %d:", i);
        scanf("%lf%*c", &a[i]);
        
    }
    
    for (i=0; i<=9; i++) {
        printf("\nInsira uma vari�vel x:");
        scanf("%lf%*c", &x[i]);
        
            for (j=0; j<=n; j++) {
            soma= soma + a[j]*pow(x[i],j);
            }
            
        p[i]=soma;
        printf("\nO resultado do polin�mio para o x na posi��o %d � %lf", i, p[i]);
        soma=0;
    }

    return 0;
    
}
