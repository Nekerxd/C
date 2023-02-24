#include <stdio.h>
void preencherVariaveisScanf(int *x);
void preencherVariaveisAtribuicao(int *x);

int main(){
    int num1;
    preencherVariaveisAtribuicao(&num1);
    printf("numero 1 : %d\n", num1);
    preencherVariaveisScanf(&num1);
    printf("Numero 1: %d\n", num1);
}

void preencherVariaveisAtribuicao(int *x){
    *x = 25;
}

void preencherVariaveisScanf(int *x){
    printf("Digite o valor : ");
    scanf("%d", x);
}
