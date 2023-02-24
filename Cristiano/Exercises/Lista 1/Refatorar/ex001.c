//Efetuar a leitura de três valores (variáveis A, B e C) e apresentar os valores em ordem crescente.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a, b, c, maior, menor, meio;
    
    printf("Insira os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        maior = a;
    else if (a < b && a < c)
        menor = a;
    else
        meio = a;
    if (b > a && b > c)
        maior = b;
    else if (b < a && b < c)
        menor = b;
    else
        meio = b;
    if (c > a && c > b)
        maior = c;
    else if (c < a && c < b)
        menor = c;
    else 
        meio = c;
    printf("Os valores na ordem crescente: %d, %d e %d", menor, meio, maior);
}