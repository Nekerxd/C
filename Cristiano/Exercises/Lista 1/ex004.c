//Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500 reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento. 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float salario, new_salario;
    printf("Insira o salário atual: R$");
    scanf("%f", &salario);
    if(salario < 500){
        new_salario = salario + (salario * 0.3);
        printf("Após o reajuste, o salário passará a ser R$%.2f", new_salario);
    }
    else
        printf("O funcionário não tem direito ao aumento.");
}
