//Escreva um programa que realize arredondamentos de números utilizando a regra usual da matemática: se a parte fracionária for maior do que ou igual a 0,5, o número é arredondado para o inteiro imediatamente superior, caso contrário, é arredondado para o inteiro imediatamente inferior.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float valor;
    int new_val;
    printf("Escreva o valor a ser arredondado: ");
    scanf("%f", &valor);
    new_val = valor < 0 ? valor-0.5 : valor+0.5;
    printf("%.2f será arredondado para %d", valor, new_val);
}
