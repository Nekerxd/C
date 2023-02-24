#include <stdio.h>
#include <locale.h>

void main()
{
    int vetor[5], i, x, j;
    setlocale(LC_ALL, "");

    for (i = 0; i < 5; i++)
    {
        printf("Digite os valores para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (vetor[i] < vetor[j])
            {
                x = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = x;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("[%d] ",vetor[i]);
    }
    
    
}
