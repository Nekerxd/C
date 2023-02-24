#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL,"");
    float peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    imc = peso / pow(altura, 2);
    printf("O seu IMC = %.2f \n", imc);
    system("pause");

}
