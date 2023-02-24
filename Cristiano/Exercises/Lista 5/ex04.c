#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int i, vet1[50], vet2[50];

    for (i = 0; i < 50; i++)
    {
        vet1[i] = i * 8;
    }
    printf("\nVetor 1: ");
    for (i = 0; i < 50; i++)
    {
        printf("%d ", vet1[i]);
    }
    for (i = 0; i < 50; i++)
    {
        vet2[i] = vet1[49 - i];
    }
    printf("\nVetor 2: ");
    for (i = 0; i < 50; i++)
    {
        printf("%d ", vet2[i]);
    }
}