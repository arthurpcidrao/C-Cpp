#include <stdio.h>
#include <math.h>
int main () {
	
	float A[3][3],B[3][3],Cof[3][3],Adj[3][3],AB[3][3];
	int i,j,k,z;
	float det,temp,soma;

    	for (i=0;i<3;i++) {
        		for (j=0;j<3;j++) {
        			
            		scanf("%f",&A[i][j]);
    		}
      	}


    	j = 0;
    	det = 0;
    	temp = 0;

    	for (i=0;i<3;i++){

          	if (i == 0){
          		
                		temp = pow(-1,(i+j+2))*(A[i+1][j+1]*A[i+2][j+2]-A[i+1][j+2]*A[i+2][j+1]);
            	}
            	if (i == 1){
            		
                		temp = pow(-1,(i+j+2))*(A[i-1][j+1]*A[i+1][j+2]-A[i-1][j+2]*A[i+1][j+1]);
            	}
            	if (i == 2) {
            		
                		temp = pow(-1,(i+j+2))*(A[i-2][j+1]*A[i-1][j+2]-A[i-2][j+2]*A[i-1][j+1]);
                	}

            	det+=A[i][j]*temp;
	}

    	printf("O determinante da matriz A eh: %f",det);

    	if (det == 0) {
    		
        		printf("A matriz não possui inversa, pois seu determinante é nulo!");
    	}
	else {

        	//Calculo da matriz de cofatores

        		for (i=0;i<3;i++){
        			for (j=0;j<3;j++){

                			if (i==0 && j==0)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i+1][j+1]*A[i+2][j+2]-A[i+1][j+2]*A[i+2][j+1]);
                			if (i==0 && j==1)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i+1][j-1]*A[i+2][j+1]-A[i+1][j+1]*A[i+2][j-1]);
                			if (i==0 && j==2)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i+1][j-2]*A[i+2][j-1]-A[i+1][j-1]*A[i+2][j-2]);
                			if (i==1 && j==0)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i-1][j+1]*A[i+1][j+2]-A[i-1][j+2]*A[i+1][j+1]);
               			if (i==1 && j==1)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i-1][j-1]*A[i+1][j+1]-A[i-1][j+1]*A[i+1][j-1]);
                			if (i==1 && j==2)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i-1][j-2]*A[i+1][j-1]-A[i-1][j-1]*A[i+1][j-2]);
                			if (i==2 && j==0)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i-2][j+1]*A[i-1][j+2]-A[i-2][j+2]*A[i-1][j+1]);
                			if (i==2 && j==1)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i-2][j-1]*A[i-1][j+1]-A[i-2][j+1]*A[i-1][j-1]);
                			if (i==2 && j==2)
                    			Cof[i][j] = pow(-1,(i+j+2))*(A[i-2][j-2]*A[i-1][j-1]-A[i-2][j-1]*A[i-1][j-2]);

         				Adj[j][i]= Cof[i][j];
         				//B[j][i] = (Adj[j][i])/det;

    			}
      		}

      		for (i=0;i<3;i++) {
          		for (j=0;j<3;j++) {
              			
				    B[i][j] = Adj[i][j]/det;
          		}
      		}

      		printf("\n A matriz inversa calculada eh: \n");
      		for (i=0;i<3;i++) {
        			for (j=0;j<3;j++) {
        				
            			printf("%f ",B[i][j]);

    			}
    			printf("\n");
      		}


      		for (i=0;i<3;i++) { // Percorre as linhas da matriz A ou x1
            		for (j=0;j<3;j++) { // Percorre as colunas da matriz B ou x2
              			soma = 0;

              			for (z=0;z<3;z++) // Percorre as duplas de elementos linha-A e coluna-B
                				soma = soma+A[i][z]*B[z][j];

              			AB[i][j] = soma;

            		}
        		}
        		
		printf("\nResultado do produto matricial: \n");
        		for (i=0;i<3;i++) {
            		for (j=0;j<3;j++) {
                			
				printf("%f ",AB[i][j]);
            		}
            		printf("\n");
        		}
	}
	
	return 0;
}


