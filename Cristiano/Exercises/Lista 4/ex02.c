#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int num = 1, pares = 0, somapar = 0;
    float media;
    while (num != 0) {
        printf("\nDigite um número (0 para encerrar): ");
        scanf("%d", &num);
        if (num % 2 == 0 && num != 0) {
            somapar = somapar + num;
            pares++;
        }
    media = somapar / pares;
    printf("\nA média dos números pares digitados é igual a: %.2f ", media);
    }
}