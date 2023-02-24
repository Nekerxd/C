// Write a program in C to display n terms of natural number and their sum

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int soma = 0, i, n;
    printf("Insira a quantidade de repetições: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++){
        soma += i;
    }

    printf("A soma é: %d", soma);
}