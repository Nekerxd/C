#include <stdio.h>
#include <locale.h>

void main()
{
    int vetor[5], i, j, k;
    setlocale(LC_ALL, "");

    for (i = 0; i < 5; i++) {
        printf("\nDigite um número: ");
        scanf("%d", &vetor[i]);
    }
    for (j = 0; j < 5; j++) {
        k = 0;
        for (i = 1; i <= vetor[j]; i++) {
            if (vetor[j] % i == 0) {
                k++;
            }
        }
        if (k == 2) {
            printf("\n%d é primo", vetor[j]);
        }
        else {
            printf("\n%d não é primo", vetor[j]); 
        }
    }
}