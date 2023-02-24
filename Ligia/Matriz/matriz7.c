#include <stdio.h>
#include <locale.h>

void main()
{
    int v[2][3][2], i, j, k;
    setlocale(LC_ALL, "");
    
    printf(" *** Preencher matriz tridimensional ***\n");
    for (k = 0; k < 2; k++)
    {
        printf("\n\n*** Tabela %d ***\n\n", k);
        for (j = 0; j < 3; j++)
        {
            for (i = 0; i < 2; i++)
            {
                printf("Posição [%d][%d][%d] = ", k, j, i);
                scanf("%d", &v[k][j][i]);
            }
        }
    }
    printf("\n\n*** Apresentando a matriz tridimensional ***\n");
    for (k = 0; k < 2; k++)
    {
        printf("\n\n*** Tabela %d ***\n\n", k);
        for (j = 0; j < 3; j++)
        {
            for (i = 0; i < 2; i++)
            {
                printf("\nNúmero [%d][%d][%d] = %d", k, j, i, v[k][j][i]);
            }
        }
    }
}