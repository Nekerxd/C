
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define N 10
#define V 5

int main(){
    setlocale(LC_ALL, "");
    int i, j, matriz[V][N], maior, vetor[V];

    time_t t;
    srand((unsigned) (&t));
    for (i = 0; i < V; i++){
        for (j = 0; j < N; j++){
            matriz[i][j] = rand() % 101;
            printf("[%2d]\t", matriz[i][j]);
            if (i == 0 && j == 0)
                maior = matriz[i][j];
            else
                maior = (matriz[i][j] > maior ? matriz[i][j] : maior);
            
            if (j == 0)
                vetor[i] = matriz[i][j];
            else
                vetor[i] = vetor[i] > matriz[i][j] ? vetor[i] : matriz[i][j];
        }
        printf("\tMaior = %d\n", vetor[i]);
    }
    printf("\nO maior número na matriz é o valor %d\n", maior);
}