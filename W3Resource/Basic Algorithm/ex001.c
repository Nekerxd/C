//Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2, retorno;

    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    retorno = (num1 == num2 ? num1*3 : num1 + num2);
    printf("%d", retorno);
}