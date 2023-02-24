#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, j, k, espc, linha;

    printf("Insira a quantidade de linhas: ");
    scanf("%d", &linha);

    espc = linha + 3;
    for (i = 1; i <= linha; i++){
        for (k = espc; k >=1; k--){
            printf(" ");
        }
        for (j = 1; j <= i ; j++){
            printf("* ");
        }
        espc--;
        printf("\n");
    }
}