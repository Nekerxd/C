#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"");
    const double pi = 3.4159;
    double c, r = 5.0;

    c = 2 * pi * r;
    printf("O comprimento da circunferência = %.2f \n", c);
    system("pause");
}
