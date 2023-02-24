// Write a C program to find the sum of first 10 natural numbers.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int soma = 0, i;

    for (i = 1; i < 11; i++){
        soma += i;
    }
    printf("A soma é: %d", soma);
}