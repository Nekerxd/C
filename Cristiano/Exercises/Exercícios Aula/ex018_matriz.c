// Cada linha um mercado, cada coluna um produto, somar as Colunas e somar as lihas;

#include <stdio.h>
#include <locale.h>
#include <time.h>
#define V 3
#define N 4

int main(){
    setlocale(LC_ALL, "");
    int i, j, produtoMercado[V][N], totalMercado[V], totalProduto[N];

    srand(time(NULL));

    for (i = 0; i < V; i++){
        for (j = 0; j < N; j++){
            produtoMercado[i][j] = rand() % 101;
            printf("[%.2d]\t", produtoMercado[i][j]);
                if (j == 0)
                totalMercado[i] = 0;
            totalMercado[i] += produtoMercado[i][j];
        }
        printf("%d\n", totalMercado[i]);
    }
    
    for (i = 0; i < N; i++){
        for (j = 0; j < V; j++){
            if (j == 0)
                totalProduto[i] = 0;
            totalProduto[i] += produtoMercado[j][i];
        }
        printf("%d\t", totalProduto[i]);
    }
}
