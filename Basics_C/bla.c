#include<stdio.h>
#include<locale.h>
int main()
{
    int i, j, maior, menor;
    int matriz[6][3];

    printf("Informe os elementos da matriz com 3 colonas e 6 linhas:\n");

    for(i=0; i<6; i++){
        for(j=0; j<3; j++)
        {
            printf("\n Elementos [%d][%d]=", i,j);
            scanf("%d", &matriz[i][j]);
        }
        }

        printf("\n\n\n saida de dados");

         for(i=0; i<6; i++)
           for(j=0; j<3; j++)
        {
            printf("\n Elementos [%d][%d]= %d", i,j, matriz[i][j]);

        }
        maior=matriz[0][0];

        for(i=0; i<6; i++)
        for(j=0; j<3; j++)
        {
            if(matriz[i][j]>maior)
                maior=matriz[i][j];
        }
           menor=matriz[0][0];

        for(i=0; i<6; i++)
        for(j=0; j<3; j++)
        {
            if(matriz[i][j]<menor)
                menor=matriz[i][j];
        }
        printf("\n o maior elemento da matriz e:%d", maior);
        printf("\n o menor elemento da matriz e:%d", menor);
 return 0;
}
