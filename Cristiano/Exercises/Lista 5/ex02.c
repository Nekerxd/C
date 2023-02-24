#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int vet1[25], vet2[25], i, soma = 0;

    for (i = 0; i < 25; i++)
    {
        printf("Insira o valor do vetor vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
        vet2[i] = vet1[i] * 3;
    }
    printf("\nVetor 1: ");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", vet1[i]);
    }
    printf("\nVetor 2: ");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", vet2[i]);
    }
}