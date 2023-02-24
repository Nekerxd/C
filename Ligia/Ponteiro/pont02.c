#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p = %d \n", *p);
}