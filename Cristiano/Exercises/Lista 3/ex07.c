// 7. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir: 
// a) Se i=1 escrever os três valores a, b, c em ordem crescente. 
// b) Se i=2 escrever os três valores a, b, c em ordem decrescente. 
// c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int i;
    float a, b, c, a2, b2, c2, temp;

    printf("Insira o valor de I: ");
    scanf("%f", &i);
    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    printf("Insira o valor de C: ");
    scanf("%d", &c);

    switch (i)
    {
    case 1:
        printf("Valores em ordem crescente: ");
        break;
    
    case 2:
        printf("Valores em ordem decrescente: ");
        break;

    case 3:
        printf("Maior valor entre os dois: ");
        break;

    default:
        printf("Valor inv�lido para I");
        break;
    }
}