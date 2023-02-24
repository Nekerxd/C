#include <stdio.h>
#include <locale.h>

void main()
{
    int v[3][3] = {1,2,3,4,5,6,7,8,9}, i, j;
    setlocale(LC_ALL, "");

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("número[%d][%d] = %d \n", j, i, v[j][i]);
        }
    }
}