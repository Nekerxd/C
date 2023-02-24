#include <stdio.h>
#include <locale.h>

void main()
{
    int vetor[10], i, j;
    j = 0;
    setlocale(LC_ALL, "");

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o elemento da [%d]ª posição: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] > 50)
        {
            j++;
            printf("\nNúmero maior que 50: %d encontrado na posição [%d]", vetor[i], i);
        }
    }
    if ( j == 0)
    {
    printf("\nNão existem números superiores a 50 no vetor");
    }
}