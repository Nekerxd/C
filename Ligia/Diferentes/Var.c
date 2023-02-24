#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O seu número é: %d", num);

}