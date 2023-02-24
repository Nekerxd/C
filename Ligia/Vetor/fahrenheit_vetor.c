#include <stdio.h>
#include <locale.h>

void main()
{
    float celsius, temp[3] = {};
    int cont;
    setlocale(LC_ALL, "");

    for (cont = 0; cont <=2; cont++)
    {
        printf("\nInsira a temperatura[%d] em Farenheit: ", cont);
        scanf("%f", &temp[cont]);
    }
    for (cont = 0; cont <=2; cont++)
    {
        celsius = (temp[cont] - 32) * 5/9;
        printf("A temperatura[%d] = %0.1fºF é equivalente a %0.1fºC. \n", cont, temp[cont], celsius);
    }
}