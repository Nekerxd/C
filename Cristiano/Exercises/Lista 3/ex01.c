//1. Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A seguir, encontre o maior dos 3 valores e o escreva com a mensagem : "É o maior ".

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int  a, b, c, maior;
    
    printf("\nInsira o valor de A: ");
    scanf("%d", &a);
    printf("\nInsira o valor de B: ");
    scanf("%d", &b);
    printf("\nInsira o valor de C: ");
    scanf("%d", &c);

    if (a > b && a > c){
        maior = a;}
    else if (b > a && b > c){
        maior = b;}
    else {
        maior = c;}
    printf("%d É o maior valor!", maior);
}
