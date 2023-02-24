#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int i =99, j;
    int *p;
    p = &i;
    j = *p + 100;
    printf("Resultado = %d", j);
}
