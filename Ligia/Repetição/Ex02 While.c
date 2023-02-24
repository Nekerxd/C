#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    int num1, soma;
    num1 = 1;
    soma = 0;
    while (num1<=10)
    {
        soma += num1;
        num1++;
    }
    printf("O resultado da soma de 1 a 10 = %d", soma);
}