#include <stdio.h>
#include <locale.h>

void main() {
    int v[3][3], i, j, k = 0;
    setlocale(LC_ALL, "");
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            printf("Insira o número da posição [%d][%d] = ", j, i);
            scanf("%d", &v[j][i]);
            if (i == j) {
                k = k + v[j][i];
            }
        }
    }
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 1; i++) {
            printf("[%d] \t [%d] \t [%d] \n", v[j][i], v[j][i+1], v[j][i+2]);
        }
    }
    printf("\nA soma dos valores da diagonal principal = %d", k);
}