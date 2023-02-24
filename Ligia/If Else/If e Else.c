#include <stdio.h>
#include <locale.h>

void main(){


    int num, chec;
    setlocale(LC_ALL,"");

    printf("Insira um número: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O número é par!");
        } else {
        printf("O número é ímpar!");
        }
}
