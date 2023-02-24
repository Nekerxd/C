#include <stdio.h>
#include <locale.h>
#include <time.h>
#define N 5
// Vetor de 5 posições, deve mostrar o maior, o menor e a soma de todos.

int main(){
    setlocale(LC_ALL, "");
    int vet[N], i, maior, menor, soma;
    
    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i < N; i++){
        vet[i] = rand()%100;
    }
    for (i = 0; i < N; i++){
        if (i == 0)
            maior = menor = vet[0];
        maior = vet[i] > maior ? vet[i] : maior;
        menor = vet[i] < menor ? vet[i] : menor;
        soma += vet[i];
    }

    printf("Maior: %d", maior);
    printf("Menor: %d", menor);
    printf("Soma: %d", vet);
}