//Elabore um programa com as 4 funções a seguir, que informado o salário pelo usuário, verifique:
//–Se o salário for maior ou igual a 1000 aumente 10% – Senão sendo o salário menor que 1000 aumente 5% 
//Funções:–Sem parâmetro e sem retorno;–Sem parâmetro e com retorno;–Com parâmetro e sem retorno;–Com parâmetro e com retorno.
#include <stdio.h>
#include <locale.h>
#include "functions.c"


int main()
{
    float sal, a, SC, CC;
    setlocale(LC_ALL, "");

    printf("\nSem parâmetro e sem retorno.\n");
    aumentoSS();

    printf("\nCom parâmetro e sem retorno.\n");
    printf("Digite o seu salário: R$");
    scanf("%f", &a);
    aumentoCS(a);

    printf("\nSem parâmetro e com retorno.\n");
    SC = aumentoSC();
    printf("O seu novo salário será R$%.2f \n", SC);

    printf("\nCom parâmetro e com retorno.\n");
    printf("Digite o seu salário: R$");
    scanf("%f", &a);
    CC = aumentoCC(a);
    printf("O seu novo salário será R$%.2f \n", CC);

} 