#include <stdio.h>
#include <locale.h>

void main(){

    int idade, cnh;
    setlocale(LC_ALL, "");

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Possui habilitação? \n 0 - não possui \n 1 - possui \n Informe a sua situação (0 ou 1): ");
    scanf("%d", &cnh);
    idade >= 18 && cnh == 1 ? printf("Você pode dirigir o veículo") : printf("Você não pode dirigir o veículo");
}
