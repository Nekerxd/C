#include <stdio.h>
#include <locale.h>

void main()
{
    int vet[5], vet2[5];
    setlocale(LC_ALL, "");

    printf("\nSem parâmetro e sem retorno.\n");
    somavetSS();
    printf("\nSem parâmetro e com retorno.\n");
    printf("%d",somavetSC());
    printf("\nCom parâmetro e sem retorno.\n");
    somavetCS(vet);
    printf("\nCom parâmetro e com retorno.\n");
    printf("%d",somavetCC(vet2));
}
//Sem parâmetro e sem retorno.
void somavetSS()
{
    int s = 0, i, vet[5];
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &vet[i]);
        s = s + vet[i];
    }
    printf("\nA soma dos vetores é = %d \n",s);
}
//Sem parâmetro e com retorno.
int somavetSC()
{
    int s = 0, i, vet[5];
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &vet[i]);
        s = s + vet[i];
    }
    return s;
}
//Com parâmetro e sem retorno.
int somavetCS(int x[])
{
    int s = 0, i;
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &x[i]);
        s = s + x[i];
    }
    printf("\nA soma dos valores do vetor é = %d", s);
}
//Com parâmetro e com retorno.
int somavetCC(int x[])
{
    int s = 0, i;
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &x[i]);
        s = s + x[i];
    }
    return s;
}
