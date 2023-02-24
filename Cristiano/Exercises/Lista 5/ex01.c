#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int vet1[50], vet2[50], i, soma = 0;

    for (i = 0; i < 50; i++) {
        printf("Insira o valor do vetor vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
        printf("Insira o valor do vetor vet2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    printf("\nVetor 1: "); 
    for (i = 0; i < 50; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\nVetor 2: "); 
    for (i = 0; i < 50; i++) {
        printf("%d ", vet2[i]);
    } for (i = 0; i < 50; i++) {
        soma = soma + vet1[i] + vet2[i];
    }

    printf("\nO total da soma dos vetores é igual a: %d", soma);
}