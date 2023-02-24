#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale (LC_ALL,"");
    float numero;
    printf("Digite o número: ");
    scanf("%f", &numero);
    printf("O número que você digitou foi %.2f", numero);
    printf("\n");
    system("calc");
    system("pause");
}
