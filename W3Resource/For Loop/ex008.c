// Write a program in C to display the n terms of odd natural number and their sum

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, i, soma = 0;

    printf("Insira um número: ");
    scanf("%d", &num);

    printf("\nO números ímpares são: ");
    for (i = 1; i <= num*2; i++){
        if (i % 2 != 0){
            printf(" %d", i);
            soma += i;
        }
    }
    printf("\nA soma dos números ímpares até %d termos é igual a: %d", num, soma);
}