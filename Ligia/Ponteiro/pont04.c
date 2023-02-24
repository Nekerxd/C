#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int x, *y, count;
    x = 100;
    count = 999;
    y = &x;
    count = *y;
    printf("Resultado = %d", count);
}