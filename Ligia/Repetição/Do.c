#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    int num1, num2, i;
    printf("Digite o número a ser multiplicado: ");
    scanf("%d", &i);
    printf("Digite quantas vezes a ser multiplicado: ");
    scanf("%d", &num2);
    num1=1;
    do {
        printf(" %d * %d = %d \n",i ,num1, i*num1);
    num1++;
    } while (num1<=num2);
}