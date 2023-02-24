#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int maiorid = 0, menorid = 0, mulheres = 0, i, idade;
    float media, salario, totsal = 0;
    char sexo;

    for (i = 0; i < 3; i++) {
        
        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo [M/F]: ");
        scanf(" %c", &sexo);
        
        printf("Salário: ");
        scanf("%f", &salario);

        if (sexo == 'f' || sexo == 'F') {
            if (salario < 100) {
                mulheres++;
            }
        }
        if (idade > maiorid) {
            maiorid = idade;
        }
        if (idade < menorid) {
            menorid = idade;
        }
        
        totsal = totsal + salario;

    }
    media = totsal / 15;

    printf("\nA menor idade foi: %d.", menorid);
    printf("\nA maior idade foi: %d.", maiorid);
    printf("\nA média de salario do grupo é: R$%.2f", media);
    if (mulheres > 0) {
        printf("\nExistem %d mulheres com salário até R$100,00", mulheres);
    }
}