//Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500 reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento. 

#include <stdio.h>
#include <locale.h>

float reajuste(float salario);

int main(){
    setlocale(LC_ALL, "");
    float salario;
    printf("\nInsira o salário atual: R$");
    scanf("%f", &salario);

    printf("\nSalário final: R$%.2f", reajuste(salario));
}

float reajuste(float salario){
    return salario < 500 ? salario * 1.3 : salario;
}