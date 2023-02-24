#include <stdio.h>
#include <locale.h>
void main()
{
    int vet1[5], vet2[5], vet3[10], i, j, x;
    setlocale(LC_ALL, "");
    printf("\nVetor1\n");
    for (i = 0; i < 5; i++) {
        printf("\nDigite o elemento da %dª posição: ", i);
        scanf("%d", &vet1[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (vet1[i] > vet1[j]) {
                x = vet1[i];
                vet1[i] = vet1[j];
                vet1[j] = x;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("[%d] \t", vet1[i]);
    }
        printf("\nVetor2\n");
    for (i = 0; i < 5; i++) {
        printf("\nDigite o elemento da %dª posição: ", i);
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (vet2[i] > vet2[j]) {
                x = vet2[i];
                vet2[i] = vet2[j];
                vet2[j] = x;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("[%d] \t", vet2[i]);
    }
    for (i = 0; i < 5; i++) {
        vet3[i*2] = vet1[i];
        vet3[i*2+1] = vet2[i];
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vet3[i] > vet3[j]) {
                x = vet3[i];
                vet3[i] = vet3[j];
                vet3[j] = x;
            }
        }
    }
    printf("\nVetor3 intercalado: \n");
    for (i = 0; i < 10; i++) {
    printf("[%d] \t", vet3[i]);
    }
}