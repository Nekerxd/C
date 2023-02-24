#include <stdio.h>
#include <locale.h>

int main()
{
    int vet1[5], vet2[5], vet3[10], i;
    setlocale(LC_ALL, "");
    for (i = 0; i < 5; i++)
    {
        printf("\nVetor 1 - Número na posição [%d]: ", i);
        scanf("%d", &vet1[i]);
        
        printf("\nVetor 2 - Número na posição [%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 5; i++) {
        vet3[i*2] = vet1[i];
    }
    for (i = 0; i < 5; i++) {
        vet3[i*2+1] = vet2[i];
    }
    printf("\nValor intercalado: \n");
    for (i = 0; i < 10; i++) {
    printf("[%d]    ", vet3[i]);
    }
}