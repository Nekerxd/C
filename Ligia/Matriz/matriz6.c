#include <stdio.h>
#include <locale.h>

void main()
{
    int v[3][2], i, j;
    setlocale(LC_ALL, "");

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Posição[%d][%d] = ", j, i);
            scanf("%d", &v[j][i]);
        }
    }
    printf("\n*** Apresentando matriz bidimensional *** \n\n");
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("\nNúmero [%d][%d] = %d", j, i, v[j][i]);
        }
    }
}
    