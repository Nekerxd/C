#include <stdio.h>
#include <locale.h>

void main()
{
    int v[3][3], i, j, k = 0;
    setlocale(LC_ALL, "");

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("Insira o número da posição [%d][%d] = ", j, i);
            scanf("%d", &v[j][i]);
            if (v[j][i] % 2 == 0)
            {
                k++;
            }
        }
    }
    printf("Ao todo foram digitados %d números pares.", k);
}