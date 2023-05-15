#include<stdio.h>

int main() {
    int candidato [2][2];
    int candidato2 [2][2];
    int resultado [2][2];
    printf("Primera matriz: \n");
        for ( int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                candidato [i][j] = 0;
                scanf("%d ", &candidato[i][j]);
            }
        }
    printf("Segunda matriz: \n");

        for ( int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                candidato2 [i][j] = 0;
                scanf("%d", &candidato2[i][j]);
            }
        }
        for ( int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                resultado [i][j] = candidato[i][j] + candidato2[i][j];
            }
        }
    printf("matriz resultado: \n");
        for ( int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                printf("%d \n", resultado[i][j]);
            }
        }

return 0; 

}