#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int maiorid = 0, mulheres = 0, idade;
    float media, salario, totsal = 0;
    char sexo;

    while (idade != -1)
    {
        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo [M/F]: ");
        scanf(" %c", &sexo);
        
        printf("Salário: ");
        scanf("%f", &salario);

        if (sexo == 'f' || sexo == 'F') {
            if (idade <= 35 && idade >= 18) {
                mulheres++;
            }
        }
        if (idade > maiorid) {
            maiorid = idade;
        }
    }
    printf("\nA maior idade do grupo foi: %d.", maiorid);
    printf("\nA média de salario do grupo é: R$%.2f", media);
    if (mulheres > 0) {
        printf("\nExistem %d mulheres com idade entre 18 e 35 anos.", mulheres);
    }
}