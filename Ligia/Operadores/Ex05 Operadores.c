#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL,"");
    char nome[100];
    float salmin, sal;
    int vendas;

    printf("Informe o nome do vendedor: ");
    gets (nome);
    printf("Informe o salário mínimo: ");
    scanf("%f", &salmin);
    printf("Informe o valor total das vendas efetuadas no mês: ");
    scanf("%s", &vendas);
    sal = salmin + (1000 * 15) / 100;
    printf("O vendedor(a) %s recebeu no final do mês o salário = %.2f \n", nome, sal);
    system("pause");
}
