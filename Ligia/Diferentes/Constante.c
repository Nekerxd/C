#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.4159

void main()
{
    setlocale(LC_ALL,"");
    double c, r;

    r = 8;
    c = 2 * pi * r;
    printf("O comprimento da circunferência = %.2f \n", c);
    system("pause");
}
