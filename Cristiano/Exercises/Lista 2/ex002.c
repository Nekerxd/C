// (WHILE) Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2, media;
    num1 = num2 = media = 1;
    
    while (num1 != 0 && num2 != 0)
    {   
            printf("\nDigite dois números inteiros: ");
            scanf("%d %d", &num1, &num2);

        if (num1 != 0 && num2 != 0){
            if (num1 % 2 == 0 && num2 % 2 == 0){
                media = ((num1 + num2) / 2);
                printf("\nA média entre os valores %d e %d é %d", num1, num2, media);
            } else
                printf("\nAmbos valores devem ser pares.");
        }
    }
}
