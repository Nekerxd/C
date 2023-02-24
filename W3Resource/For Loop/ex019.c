// Write a program in C to display the n terms of harmonic series and their sum.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num, i;
    float soma = 0;

    printf("Insira um número: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        i < num ? printf("[1/%d] + ", i) : printf("[1/%d]", i);
        soma += 1/(float)i;
    }
    printf("\nA soma da série harmônica de %d termos é igual a: %f", num, soma);
}