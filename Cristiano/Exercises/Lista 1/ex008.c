//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um diagrama de blocos que leia a variável P (peso de peixes) e verifique se há excesso. Se houver, gravar na variável E (Excesso) e na variável M o valor da multa que João deverá pagar. Caso contrário mostrar tais variáveis com o conteúdo ZERO.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float P, E, M;
    printf("Quantos quilos de peixe foram pescados: ");
    scanf("%f", &P);

    E = (P > 50 ? P - 50 : 0);
    M = (P > 50 ? 4.0 * E : 0);
    
    printf("Com %.1fkg de peixes pescados:\nO excesso de peixes foi de %.1fkg e a multa foi de R$%.2f", P, E, M);
}