#include <stdio.h>

int main (){
    /*Construya un programa en lenguaje C que cree una matriz cuyas dimensiones sean 
    ingresadas por el usuario, inicialice toda la matriz en ceros 
    y luego imprima la matriz con la diagonal principal con valores en 1.
    reazlizado por brandon Arellano
    */

   int dimension; 
   int matriz [1][1];
   printf("Construya un programa en lenguaje C que cree una matriz cuyas dimensiones sean ingresadas por el usuario, inicialice toda la matriz en ceros y luego imprima la matriz con la diagonal principal con valores en 1.");
    printf("\n Ingrese un numero entero para la creacion de la matriz: ");
   scanf("%i",&dimension);

   //creacion de la matriz
        for ( int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                matriz [i][j] = 0;
            }
        }

        for ( int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                if (i == j);
                {
                   for ( int i = 0; i < 2; i++){
                    for (int j = 0; j < 2; j++){
                        matriz [i][j] = 1;
            }
        } 
                }
                
              
            }
        }

        for ( int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                printf("%d \n", matriz[i][j]);
            }
        }

    return 0; 
}