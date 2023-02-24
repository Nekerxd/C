#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL,"");

    char nome[100];
    float n1, n2, n3, n4, md;

    printf("Digite o nome do aluno: ");
    gets(nome);
    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &n3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &n4);
    md = (n1 + n2 + n3 + n4) / 4;
    printf("O aluno %s obteve a média: %.2f \n", nome, md);
}
