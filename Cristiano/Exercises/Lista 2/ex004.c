//(FOR) Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe de 15 pessoas:  
// a) a média de salário do grupo;
// b) maior e menor idade do grupo;
// c) quantidade de mulheres com salário até R$100,00.

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int maiorid = 0, menorid = 0, mulheres = 0, i, idade;
    float media, salario, totsal = 0;
    char sexo;

    for (i = 0; i < 15; i++) {
        
        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo [M/F]: ");
        scanf(" %c", &sexo);
        
        printf("Salário: ");
        scanf("%f", &salario);

        if (sexo == 'f' || sexo == 'F') {
            if (salario <= 100)
                mulheres++;
        }
        if (idade > maiorid)
            maiorid = idade;
        if (menorid == 0 || idade < menorid)
            menorid = idade;
        
        totsal += salario;

    }
    media = totsal / 15.0;

    printf("\nA menor idade foi: %d.", menorid);
    printf("\nA maior idade foi: %d.", maiorid);
    printf("\nA média de salario do grupo é: R$%.2f", media);
    if (mulheres > 0)
        printf("\nExistem %d mulheres com salário até R$100,00", mulheres);
}
