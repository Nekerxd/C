#include <stdio.h>
#include <locale.h>

void main()
{
    int vet1[5], vet2[5], vet3[5], i;
    setlocale(LC_ALL, "");

    for (i = 0; i < 5; i++)
    {
        printf("\nVetor 1 - Número na posição [%d]: ", i);
        scanf("%d", &vet1[i]);
        
        printf("\nVetor 2 - Número na posição [%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 5; i++)
    {
        vet3[i] = vet1[i] + vet2[i];
    }
    printf("Soma das posiÃ§Ãµes dos vetores 1 e 2: \n");
    for (i = 0; i < 5; i++) {
    printf("[%d]    ", vet3[i]);
    }
}