//Faça um programa que receba o código correspondente ao cargo de um funcionário e imprima seu cargo e o percentual de aumento ao qual este fncionário tem direito seguindo a tabela abaixo: 
//Código      Cargo   Percentual
//1        Escriturário   50%
//2        Secretário     35%
//3        Caixa          20%
//4        Gerente        10%
//5        Diretor        Não tem aumento

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int cod;

    printf("Insira o código correspondente ao cargo: ");
    scanf("%d", &cod);

    switch (cod)
    {
    case 1:
        printf("Os escrituários receberão um aumento de 50%%");
        break;
    case 2:
        printf("Os secretários receberão um aumento de 35%%");
        break;
    case 3:
        printf("Os caixas receberão um aumento de 20%%");
        break;
    case 4:
        printf("Os gerentes receberão um aumento de 10%%");
        break;
    case 5:
        printf("Os diretores não receberão um aumento salarial");
        break;
    default:
        printf("Código inválido");
        break;
    }
}