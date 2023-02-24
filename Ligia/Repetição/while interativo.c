#include <stdio.h>
#include <locale.h>

void main(){
    
    setlocale(LC_ALL,"Portuguese");
    float num1, num2, num3, soma;
    char continuar;
    continuar = 's';
    while (continuar == 's' || continuar == 'S')
    {
        printf("Digite o primeiro valor da soma: ");
        scanf("%f", &num1);
        printf("Digite o segundo valor da soma: ");
        scanf("%f", &num2);
        printf("Digite o terceiro valor da soma: ");
        scanf("%f", &num3);
        soma = num1 + num2 + num3;
        printf("A soma de %.1f + %.1f + %.1f = %.1f \n\n", num1, num2, num3, soma);
        printf("Deseja continuar o calculo da soma de outros números? \n");
        printf("Tecle [S] para continuar ou [N] para finalizar o programa: ");
        scanf(" %c", &continuar);
        printf("\n");
    }
        printf("O programa foi finalizado!");
    }