// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num, i, k = 9, soma = 0;

    printf("Insira um número: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        soma += k;
        printf("%d\t",k);
        k = k * 10 + 9;
    } 
    printf("\nA soma da série é igual a: %d", soma);
}