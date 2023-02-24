#include <stdio.h>
#include <locale.h>

void main()
{
    int v[2][2], i, j, k = 0;
    setlocale(LC_ALL, "");
    
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Posição [%d][%d] = ", j, i);
            scanf("%d", &v[j][i]);
            k = k + v[j][i];
        }
    }
    printf("A soma dos números da matriz é %d", k);
}