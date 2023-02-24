//A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos de indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1o grupo são intimadas a suspenderem suas atividades, se o índice crescer para 0,4 as indústrias do 1o e 2o grupo são intimadas a suspenderem suas atividades, se o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Faça um programa que leia o índice de poluição medido e emita a notificação adequada aos diferentes grupos de empresas.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float pollution;
    
    printf("Insira o índice de poluição: ");
    scanf("%f", &pollution);
    if (pollution < 0.26)
        printf("O índice de poluição está aceitável.");
    else if (pollution < 0.3)
        printf("O índice de poluição requer atenção.");
    else if (pollution >= 0.3 && pollution < 0.4)
        printf("As indústrias do 1º grupo devem suspender as suas atividades.");
    else if(pollution >= 0.4 && pollution < 0.5)
        printf("As indústrias do 1º e 2º grupo devem suspender as suas atividades.");
    else
        printf("Todos os grupos devem paralisar as suas atividades.");
}