#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale (LC_ALL,"");

    float vl, pc;
    int vz;

    printf("Qual é o valor do produto? \n");
    scanf("%f",&vl);
    printf("Em quantas parcelas deseja pagar? \n");
    scanf("%d",&vz);
    pc = vl / vz;
    printf("O valor de cada parcela será %.2f \n", pc);
    system("pause");
}
