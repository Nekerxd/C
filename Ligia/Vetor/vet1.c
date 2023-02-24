#include <stdio.h>
#include <locale.h>

void main()
{
    int vet1[5], vet2[5], vet3[10], cont;
    setlocale(LC_ALL, "");
    for (cont = 0; cont < 5; cont++)
    {
        printf("\nVetor 1 - Número na posição [%d]: ", cont);
        scanf("%d", &vet1[cont]);
        
        printf("\nVetor 2 - Número na posição [%d]: ", cont);
        scanf("%d", &vet2[cont]);
    }
    for (cont = 0; cont < 5; cont++)
    {
        vet3[cont] = vet1[cont];
    }
    for (cont = 0; cont < 5; cont++)
    {
        vet3[cont + 5] = vet2[cont];
    }
    printf("[%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] ", vet3[0], vet3[1], vet3[2], vet3[3], vet3[4], vet3[5], vet3[6], vet3[7], vet3[8], vet3[9]);
}