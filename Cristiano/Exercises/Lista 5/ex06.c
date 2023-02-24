#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float A[5];
    int i, j, temp;
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor de A[%d]: ", i);
        scanf("%f", &A[i]);
    }
    printf("\nVetor A: \n");
    for (i = 0; i < 5; i++) {
    printf("[%.2f] \t", A[i]);
    }
    
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("\nVetor A em ordem crescente: \n");
    for (i = 0; i < 5; i++) {
    printf("[%.2f] \t", A[i]);
    }
}