#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int i, vet1[10], vet2[10], vet3[20];

    printf("\nVetor 1: ");
    for (i = 0; i < 10; i++) {
        printf("Insira o valor do vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
    }
    printf("\nVetor 2: ");
    for (i = 0; i < 10; i++) {
        printf("Insira o valor do vet2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 10; i++) {
        vet3[i*2] = vet1[i];
        vet3[i*2+1] = vet2[i];
    }
    printf("\nVetor 3: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", vet3[i]);
    }
}