//Elabore um algoritmo que leia as variáveis C e N, respectivamente código e número de horas trabalhadas de um operário. E calcule o salário sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule o excesso de pagamento armazenando-o na variável E, caso contrário zerar tal variável. A hora excedente de trabalho vale R$ 20,00. No final do processamento imprimir o salário total e o salário excedente.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int C, N;
    float salario, E;

    printf("Insira o código do operário: ");
    scanf("%d", &C);
    printf("Insira o número de horas trabalhadas: ");
    scanf("%d", &N);
    E = (N > 50 ? N - 50 : 0) * 20;
    salario = (N > 50 ? 50 * 10 + E : N * 10);
    printf("O funcionário de código %d, receberá no total R$%.2f e o salário excedente foi de R$%.2f", C, salario, E);
}