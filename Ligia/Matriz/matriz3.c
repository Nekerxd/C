#include <stdio.h>
#include <locale.h>

void main()
{
    int v[3][4] = {3, 8, 1, 5, 0, 2, 4, 7, 2, 5, 5, 9, 3}, i, j;
    setlocale(LC_ALL, "");

    for (i = 0; i < 3; i++)
    {
        printf("\nNúmeros da linha %d\n", i);
        for (j = 0; j < 4; j++)
        {
            printf("Número[%d][%d] = %d \n", i, j, v[i][j]);
        }
        
    }
}
    