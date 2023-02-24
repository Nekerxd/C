#include <stdio.h>
#include <locale.h>

void main()
{
    int v[3][3][4] = {3, 8, 1, 5, 0, 2, 4, 7, 2, 5, 9, 3,
                      7, 3, 0, 2, 5, 1, 9, 4, 6, 9, 1, 5,
                      6, 3, 8, 1, 2, 3, 5, 2, 8, 4, 0, 3}, i, j, k;
    setlocale(LC_ALL, "");

    for (k = 0; k < 3; k++)
    {
        printf("\n*** Tabela %d ***\n", k);
        for (j = 0; j < 3; j++)
        {
            printf("\nNúmeros da linha %d\n", j);
            for (i = 0; i < 4; i++)
            {
                printf("\nNúmero[%d][%d][%d] = %d", k, j, i, v[k][j][i]);
            }
            
        }
        
    }
}
    