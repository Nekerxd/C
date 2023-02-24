#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int a = 5, b = 12, r, *p1, *p2;
    
    p1 = &a;
    p2 = &b;
    r = *p1 + *p2;

    printf("Endereço de a = %p \n", &a);
    printf("Endereço de b = %p \n", &b);
    printf("Conteúdo de p1 = %p \n", p1);
    printf("Conteúdo de p2 = %p \n", p2);
    printf("Resultado = %d", r);
}